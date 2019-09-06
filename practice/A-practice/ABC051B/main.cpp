#include <iostream>

using namespace std;

int main() {
    int K, S;
    cin >> K >> S;
    int ans {0};
    
    for (int i = 0; i < K; i++) {
        for (int j = 0; j < S - i; j++) {
            if (S - i - j - 2 >K) {
                
            }
            ans++;
        }
    }
    cout << ans << endl;
    
    return 0;
}