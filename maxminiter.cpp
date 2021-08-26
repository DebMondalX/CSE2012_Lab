#include<bits/stdc++.h>
using namespace std;
void MaxMiniterative(int arr[],int n){
    int a[2];
    int max = -1,min = INFINITY;
    for (int i = 0; i <n ; ++i) {
        if (arr[i] > max){
            max = arr[i];
        }
    }
    a[0] = max;
    for (int i = 0; i <n ; ++i) {
        if (arr[i]<min){
            min = arr[i];
        }
    }
    a[1] = min;
    cout << a[0] <<" "<<a[1] <<endl;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i <n ; ++i) {
        cin >> arr[i];
    }
    MaxMiniterative(arr,n);
}
