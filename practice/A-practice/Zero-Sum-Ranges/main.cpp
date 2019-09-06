#include <iostream>
#include <vector>

using namespace std;

int main() {
    int  N;
    vector<long long> a;
    int count{0};
    long long sum;
    
    cin >> N;
    for (int i {0}; i < N; ++i) {
        long long A;
        cin >> A;
        a.push_back(A);
    }
    
    for (int j {0}; j < N; ++j) {
        sum = a.at(j);
        for (int k {j + 1}; k < N; ++k) {
            sum += a.at(k);
            if (sum == 0) {
                count++;
                if (k == N-1) {
                    break;
                }
            } 
        }
    }
    cout << count << endl;
    
    return 0;
}