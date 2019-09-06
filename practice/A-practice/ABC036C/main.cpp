#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    long long a[N];
    long long b[N];
    int count {0};
    
    for (int i {0}; i < N; i++) {
        cin >> a[i];
    }
    
    sort(a, a + N);
    for (int j {0}; j < N; j++) {
        b[0] = 0
        if (j > 0) {
            if (a[j-1] == a[j]) {
                b[j] = count
            } else {
                count++;
            }
        }
    }
    
    return 0;
}