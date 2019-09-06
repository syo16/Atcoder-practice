#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool checkAC(char, char);

int main () {
    int n, q;
    string s;
    cin >> n >> q;
    cin >> s;
    vector<int> l(q);
    vector<int> r(q);
    for (int i = 0; i < q; i++) {
        cin >> l[i] >> r[i];
    }
    vector<int> sum_AC(n);
    sum_AC[0] = 0;
    for(int i = 1; i < n; i++) {
        if (checkAC(s[i-1], s[i])) {
            sum_AC[i] = sum_AC[i-1] + 1;
        } else {
            sum_AC[i] = sum_AC[i-1];
        }
    }
    
    for (int i = 0; i < q; i++) {
        cout << sum_AC[r[i]-1] - sum_AC[l[i]-1] << endl;
    }
}

bool checkAC(char c1, char c2) {
    if (c1 == 'A' && c2 == 'C') {
        return true;
    } else {
        return false;
    }
}
