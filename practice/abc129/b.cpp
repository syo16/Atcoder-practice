#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> w(n);
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
    int s1=0, s2=0;
    long long min = 100000000000;
    int ans;
    for (int t = 0; t < n-1; t++) {
       for (int i = 0; i < n; i++) {
            if (i <= t) {
                s1+= w[i];
            } else {
                s2+= w[i];
            }
       } 
       if (abs(s1-s2) <= min) {
           min = abs(s1-s2);
       }
       s1=0;
       s2=0;
    }

    ans = min;
    cout << ans << endl;
}
