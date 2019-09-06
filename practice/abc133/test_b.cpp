#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int x[n][d];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < d; j++) {
            cin >> x[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int distance = 0;
        for (int j = i+1; j < n; j++) {
            for (int k = 0;k < d; k++) {
                distance += pow(x[i][k] - x[j][k], 2);
            }
            if (sqrt(distance) == int(sqrt(distance))) {
                ans++;
            }
            distance = 0;
        }
    }
    cout << ans << endl;
}

