#include <iostream>
#include <string>

using namespace std;
long long sum(int k)  {
    long long total{0};
    for (int l {0}; l < k; l++) {
        total += a[l];
    } 
    return total;
}

int main() {
    int N, K;
    cin >> N >> K;
    long long a[N];
    long long ans{0};
    
    for (int i {0}; i < N; i++) {
        cin >> a[i];
    }
    for (int j {0}; j < (N-K+1); j++) {
        ans += sum(K + j) - sum(j);
    }
    
    cout << ans << endl;
    return 0;
}