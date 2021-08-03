//Debarghya Mondal
//debarghys.mondal2020@vitstudent.ac.in
//20BCE0690

#include<iostream>
using namespace std;
//factorial using recursion.
int factorial(int n){
    if (n==0)
        return 1;
    return n*factorial(n-1);
}

int main(){
    //input n
    int n;
    cin >> n;
    int v = factorial(n);
    cout << v <<endl;
}