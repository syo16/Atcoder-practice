#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    string s;
    cin >> s;

    int zero_num = 0;
    int one_num = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            zero_num++;
        } else {
            one_num++;
        }
    }
    cout << s.size() - abs(zero_num - one_num) << endl;
}
