#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int count[3] = {0, 0, 0};
    int ans{0};
    
    if (K % 2 == 0) {
        for (int i = 1; i <= N; i++) {
            if (i % K == 0) {
                count[0]++;
            }
            if (i % K == K/2) {
                count[1]++;
            }
        }
        ans += pow(count[0], 3) + pow(count[1], 3);
    } else {
        for (int j = 1; j <= N; j++) {
            if(j % K == 0) {
                count[2]++;
            }
        }
        ans += pow(count[2], 3);
    }
    
    cout << ans << endl;
    return 0;
}