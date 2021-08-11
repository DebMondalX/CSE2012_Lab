//Debarghya Mondal
//20BCE0690
//debarghya.mondal2020@vitstudent.ac.in

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,max,max2,min,min2;
//input the number of players
    cin >> n;
    int arr[n];
//loop to input the score of each player
    for (int i = 0; i <n ; ++i) {
        cin >> arr[i];
    }
    max = -1;
    max2 = -1;
 //loop to find max and second max score:
    for (int i = 0; i <n ; ++i) {
        if (arr[i]>max){
            max2 = max;
            max = arr[i];
        }
        else if (arr[i]>max2 && arr[i]<max){
            max2 = arr[i];
        }
    }
 //loop to find the min and second min score:
    min = INT_MAX;
    min2 = INT_MAX;
    for (int i = 0; i < n; ++i) {
        if (arr[i]<min){
            min2 = min;
            min = arr[i];
        }
        else if (arr[i]<min2 && arr[i]>min){
            min2 = arr[i];
        }
    }
//loop to print the result:
    for (int i = 0; i <n ; ++i) {
        if (arr[i] == max){
            cout <<"The winner is: " << i+1 <<" th player."<<endl;
        }
        else if (arr[i] == max2){
            cout <<"The second winner is: " <<i+1 <<" th player."<<endl;
        }
        else if (arr[i] == min){
            cout <<"The worst player is: " << i+1 <<" th player"<<endl;
        }
        else if (arr[i]==min2){
            cout <<"The next worst player is: "<<i+1 <<" th player"<<endl;
        }
    }

return 0;
}
