#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;
    int count = 0;

    for (int i = 100; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            count++;
        }
        if (count == k) {
            cout << i << endl;
            break;
        }
    }
}
