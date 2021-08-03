//Debarghya Mondal
// debarghya.mondal2020@vitstudent.ac.in
// 20BCE0690

#include<iostream>
using namespace std;
int partition(int arr[],int low, int high){
    int pivot = arr[high];
    int i = low;
    for(int j=0;j<high;j++){
        if (arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i;
}

void Quicksort(int arr[],int low,int high){
    if (low<high) {
        int pivot = partition(arr, low, high);
        Quicksort(arr, low, pivot - 1);
        Quicksort(arr, pivot + 1, high);
    }
}
int main(){
    long int n; //input no. of elements
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    Quicksort(arr,0,n);
    cout << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i]<<" ";
    }
    return 0;
}
