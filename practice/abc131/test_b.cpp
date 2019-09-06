#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    int before_sum = n*l + n*(n-1)/2;
    long long min = 10000000000000;
    int ans;
    for (int i = 0; i < n; i++) {
      if (abs(l+i) < min) {
          min = abs(l+i);
          ans = before_sum - (l+i);
      }  
    }
    cout << ans << endl;
}
