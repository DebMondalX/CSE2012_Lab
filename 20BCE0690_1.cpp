//Debarghya Mondal
// debarghya.mondal2020@vitstudent.ac.in
// 20BCE0690

#include<bits/stdc++.h>
using namespace std;
int main(){
 long int n,k;
 //no of inputs in array
 cin >> n;
 long int arr[n];
 for(int i=0;i<n;i++){
     cin >> arr[i];
 }
  cout <<" Enter k"<<endl;
 cin >> k;
 //we sort the array
 sort(arr,arr+n);
 cout << arr[k-1] <<endl;

 return 0;
}
