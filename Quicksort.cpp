//Debarghya Mondal
// debarghya.mondal2020@vitstudent.ac.in
// 20BCE0690

#include<iostream>
using namespace std;
int partition(int arr[],int low, int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j=low;j<high;j++){
        if (arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void Quicksort(int arr[],int low,int high){
    if (low<high) {
        int pi = partition(arr, low, high);
        Quicksort(arr, low, pi - 1);
        Quicksort(arr, pi + 1, high);
    }
}
int main(){
    long int n; //input no. of elements
    cin >> n;
    int arr[n];
    for (int k = 0; k < n; ++k) {
        cin >> arr[k];
    }
    Quicksort(arr,0,n-1);
    cout << endl;
    for (int k = 0; k < n; ++k) {
        cout << arr[k]<<" ";
    }
    return 0;
}
