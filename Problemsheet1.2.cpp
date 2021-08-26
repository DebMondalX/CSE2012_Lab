//Debarghya Mondal
// debarghya.mondal2020@vitstudent.ac.in
// 20BCE0690

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,count = 0;
    cin >> n; //input n, the number of elements
    int arr[n];
    for (int i = 0; i < n; ++i) {  //input the array elements
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) { // loop ensures j>i
            if (arr[i] > arr[j]) {   // checking the other condition
                count++;    // count no of inversions
                cout << "( " << arr[i] << " ," << arr[j] << " ) "; //print the pairs
            }
        }
    }
    cout <<endl;
    cout << "NO of inversions:" <<endl;
    cout << count <<endl;
    return 0;
}
