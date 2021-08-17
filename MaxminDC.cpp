#include<bits/stdc++.h>
using namespace std;
struct p{
    int min;
    int max;
};
p MinMaxDaC(int arr[],int low,int high){
    p minmax,minmaxL,minmaxR;
    int mid;
    if (low==high){
        minmax.max = arr[low];
        minmax.min = arr[high];
        return minmax;
    }
    if (high == low +1){
        if (arr[low]>arr[high]){
            minmax.max = arr[low];
            minmax.min = arr[high];
        }
        else{
            minmax.max = arr[high];
            minmax.min = arr[low];
        }
    }
    mid = (low+high)/2;
        minmaxL = MinMaxDaC(arr,low,mid);
        minmaxR = MinMaxDaC(arr,mid+1,high);
    if (minmaxL.min>minmaxR.min){
        minmax.min = minmaxR.min;
    }
    else{
        minmax.min = minmaxL.min;
    }
    if (minmaxL.max > minmaxR.min){
        minmax.max = minmaxL.max;
    }
    else{
        minmax.max = minmaxR.max;
    }

    return minmax;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i <n ; ++i) {
        cin >> arr[i];
    }
   struct p minmax = MinMaxDaC(arr,0,n-1);
    cout <<"Max element:"<<endl;
    cout << minmax.max<<endl;
    cout <<"Min element:" <<endl;
    cout <<minmax.min<<endl;

    return 0;
}