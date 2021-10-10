#include <bits/stdc++.h>
using namespace std;
void computeLPSArray(string pat, int M, int* lps);

// Prints occurrences of txt[] in pat[]
void KMPSearch(string pat, string txt)
{
    int M = pat.size();
    int N = txt.size();

    // create lps[] that will hold the longest prefix suffix
    // values for pattern
    int lps[M];

    // Calculate lps array
    computeLPSArray(pat, M, lps);

    int i = 0; // index for txt[]
    int j = 0; // index for pat[]
    while (i < N) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }

        if (j == M) {
            cout << "Found pattern at position  "<< i -j +1;
            j = lps[j - 1];
        }

            // mismatch after j matches
        else if (i < N && pat[j] != txt[i]) {
            // Do not match lps[0..lps[j-1]] characters,
            // they will match anyway
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
}

// Fills lps[] for given patttern pat[0..M-1]
void computeLPSArray(string pat, int M, int* lps)
{
    // length of the previous longest prefix suffix
    int len = 0;

    lps[0] = 0; // lps[0] is always 0

    // calculates lps[i] for i = 1 to M-1
    int i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
            if (len != 0) {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

int main()
{
    string text , pattern;
    cout << "Enter the text: "<<endl;
    cin >> text;
    cout <<"Enter the pattern" <<endl;
    cin >> pattern;
    auto start = std::chrono::steady_clock::now();
    KMPSearch(pattern, text);
    auto end = chrono::steady_clock::now();
    double elapsed_time = double(chrono::duration_cast<chrono::milliseconds>(end-start).count());
    cout <<endl;
    cout << "Elapsed time (ms)  " << elapsed_time <<endl;
    return 0;
}
