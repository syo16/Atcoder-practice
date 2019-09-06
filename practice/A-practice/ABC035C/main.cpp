#include <iostream>

using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    
    int l[Q];
    int r[Q];
    int n[N];
    
    for (int i {0}; i < Q; i++) {
        cin >> l[i] >> r[i];
    }
    
    for (int j {0}; j < N; j++) {
        n[j] = 0;
    }
    
    for (int k {0}; k < Q; k++) {
        for (int m {l[k] - 1}; m < r[k]; m++) {
            if (n[m] == 0) {
                n[m] = 1;
            } else {
                n[m] = 0;
            }
        }
    }
    for (auto a: n) {
        cout << a;
    }
    cout << endl;
    
    return 0;
}