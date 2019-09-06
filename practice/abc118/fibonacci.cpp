#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> fibonacci(n+1);
    for (int i = 0; i < n+1; i++) {
        if (i == 0 || i == 1) {
            fibonacci[i] = 1;
        } else {
            fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
        }
    }
    cout << fibonacci[n] << endl;
}
