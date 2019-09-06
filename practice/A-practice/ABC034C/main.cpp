#include <iostream>

using namespace std;
long long factorial (long long n) {
    long long total {1};
    for (int i {1}; i <= n; i++) {
        total *= i;
    }
    return total;
}

int main() {
    long long W, H;
    long long num {1000000007};
    
    cin >> W >> H;
    
    cout << (factorial(W + H - 2) / (factorial(W-1) * factorial(H-1))) / num << endl;
    
    return 0;
}