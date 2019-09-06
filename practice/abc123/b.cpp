#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> n(5);
    vector<int> diff(5);
    int max = 0;
    int ans = 0;
    for (int i = 0; i < 5; i++) {
        cin >> n[i];
        diff[i] = 10 - n[i] % 10;
        if (diff[i] != 10) {
            n[i] = n[i] + diff[i];
            if (max < diff[i]) {
                max = diff[i];
            }
        }
        ans += n[i]; 
    }
    cout << ans - max << endl;
}
