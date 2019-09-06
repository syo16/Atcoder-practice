#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

string S;
long N[13];
long MOD = 1000000007; 

int main() {
    N[0] = 1;
    cin >> S;
    int n = S.length();
    int w = 1;
    for (int i = 0; i < n; i++) {
        char c = S[n-i-1];//i+1桁目の文字を取得している
        int Nnew[13] = {};
        if (c == '?') {
            for (int j = 0; j < 10; j++) {
                int m = (j*w) % 13;
                for (int k = 0; k < 13; k++) {
                    Nnew[(m+k) % 13] += N[k];
                    Nnew[(m+k) % 13] %= MOD;
                }
            }
        } else {
            int m = ((int)(c-'0')*w) % 13;
            for (int k = 0; k < 13; k++) Nnew[(m+k) % 13] = N[k];
        }
        for (int k = 0; k < 13; k++) N[k] = Nnew[k];

        w = (w*10) % 13;
    }
    cout << N[5] << endl;
}
