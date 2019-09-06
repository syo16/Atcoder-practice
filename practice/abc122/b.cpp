#include <iostream>
#include <string>
using namespace std;
bool check (char);

int main() {
    string s;
    cin >> s;
    char first_letter = s[0];
    int ans = check(first_letter) ? 1 : 0;
    int count = ans;
    for (int i = 1; i < s.size(); i++) {
        if ((check(s[i - 1]) && check(s[i])) || (count == 0 && check(s[i]))) {
           count++; 
           ans = (ans < count) ? count: ans;
        }else {
            count = 0;
        }
    }
    cout << ans << endl;
}

bool check (char c) {
    if (c == 'A' || c == 'T' || c == 'G' || c == 'C') {
        return true;
    } else {
        return false;
    }
}
