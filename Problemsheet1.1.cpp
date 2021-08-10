//Debarghya Mondal
// debarghya.mondal2020@vitstudent.ac.in
// 20BCE0690

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n;//input number of players
    cin>>n;

    //input array
    long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //Finding winner
    int winner =0;
    for(int i=0;i<n;i++)
    {
        if(arr[winner]<arr[i])
        {
            winner=i;
        }
    }
    cout<<"Winner is Player: "<<winner+1<<endl;

     //Finding next winner
    long int next_winner=-1;
    for(int i=0;i<n;i++)
    {
        if (arr[i] != arr[winner]) {
            // first change the value of second largest
            // as soon as the next element is found
            if (next_winner == -1)
                next_winner = i;
            else if (arr[i] > arr[next_winner])
                next_winner = i;
        }
    }
    cout<<"Next Winner is Player: "<<next_winner+1<<endl;


    // Finding worst player:
    long int worst=0;
    for (int i=0;i<n;i++)
    {
        if(arr[worst]>arr[i])
        {
            worst=i;
        }
    }
    cout<<"Worst Player is: "<<worst+1<<endl;

    //FInding next worst player
    long int next_worst=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != arr[worst]){
            if(next_worst==-1)
                next_worst=i;
            else if(arr[i]<arr[next_worst])
                next_worst=i;
        }
    }
    cout<<"Next Worst Player is: "<<next_worst+1<<endl;

    return 0;
}