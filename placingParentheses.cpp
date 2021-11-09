#include<bits/stdc++.h>
using namespace std;
unordered_map<string, vector<int>> memo;

vector<int> diffWaysToCompute(string input) {
    vector<int> res;
    int len = input.length();

    if (memo[input].size()>0) return memo[input];

    for (int i=0; i<len; i++) {
        char c = input[i];

        if (c=='+' || c=='-' || c=='*') {
            vector<int> res1 = diffWaysToCompute(input.substr(0, i));
            vector<int> res2 = diffWaysToCompute(input.substr(i+1));

            for (int j=0; j<res1.size(); j++) {
                for (int k=0; k<res2.size(); k++) {
                    if (c=='+') {
                        res.push_back(res1[j]+res2[k]);
                    } else if (c=='-') {
                        res.push_back(res1[j]-res2[k]);
                    } else {
                        res.push_back(res1[j]*res2[k]);
                    }
                }
            }
        }
    }

    // no operator in input string
    if (res.size()==0)
        return memo[input] = {stoi(input)};

    return memo[input] = res;
}
int main(){
    string s;
    cout <<"Reg. no 20BCE0690" <<endl;
    cin >> s;
    vector<int > ans;
    ans = diffWaysToCompute(s);
    sort(ans.begin(),ans.end());
    cout << ans[ans.size()-1] <<endl;

}

