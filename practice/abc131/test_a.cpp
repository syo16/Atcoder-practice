#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string ans = "Good";
    for (int i = 0; i < 3; i++) {
        if (int(s[i]) == int(s[i + 1])) {
            ans = "Bad";
            break;
        }
    }
    cout << ans << endl;
}
