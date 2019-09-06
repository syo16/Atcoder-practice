#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    string s[N][N];
    
    for (int i {0}; i < N; ++i) {
        for (int j {0}; j < N; ++j) {
            cin >> s[i][j];
        }
    }
    for (int k {0}; k < N; ++k) {
        for (int l {N}; l > 0; --l) {
            cout << s[l - 1][k];
        }
        cout << endl;
    }
    
    return 0;
}