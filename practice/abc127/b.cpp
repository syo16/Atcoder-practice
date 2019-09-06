#include <iostream>
using namespace std;

int main() {
    int r, d, x_2000;
    cin >> r >> d >> x_2000;
    int x[11];
    x[0] = x_2000;
    for (int i = 1; i < 11; i++) {
        x[i] = r * x[i-1] - d;
        cout << x[i] << endl;
    }
}
