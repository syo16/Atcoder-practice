#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    double ans = 0;;

    for (int i = 1; i <= n; i++) {
        double p = 1 / double(n);
        int t = 0;
        while(i * pow(2, t) < k) {
            p *= 0.5;
            t++;
        }
        ans += p;
    }
    printf("%.12f\n", ans);
}
