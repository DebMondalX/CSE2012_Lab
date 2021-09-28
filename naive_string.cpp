#include <bits/stdc++.h>
using namespace std;
int main()
{   cout <<"Debarghya Mondal 20BCE0690"<<endl;
    string t,p;
    cin >> t ;
    cin >> p;
    auto start = std::chrono::steady_clock::now();
    //m = textsize
    //n = patternsize
    int n = t.size();
    int m = p.size();
    for (int i = 0; i <= n-m ; ++i) {
        int j;
        for ( j = 0; j <m ; ++j) {
            if (t[i+j]!=p[j]){
                break;
            }
        }
        if (j==m)
            cout << "Pattern found at " << i <<"th position"<<endl;
    }


    auto end = chrono::steady_clock::now();
    double elapsed_time = double(chrono::duration_cast<chrono::milliseconds>(end-start).count());
    cout <<endl;
    cout << "Elapsed time (ms)  " << elapsed_time <<endl;

    return 0;
}
