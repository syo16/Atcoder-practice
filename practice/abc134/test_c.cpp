#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans[n];
    vector<int> temp(n); 
    temp = a;
    sort(a.begin(), a.end(), greater<int>());
    int max = a[0];
    int second_max = a[1];
    a = temp;
    for (int i = 0; i < n; i++) {
        if (a[i] == max) {
            ans[i] = second_max;
        } else {
            ans[i] = max;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }
}
