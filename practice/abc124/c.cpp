#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int s_length = int(s.length());
    int count = 0;

    for (int i = 1; i < s_length; i++) {
        if (s[i-1] == s[i]) {
            s[i] = s[i] == '0' ? '1' : '0'; 
            count++;
        }
    }
    int ans = (count > (s_length - count)) ? (s_length - count) : count;
    cout << ans << endl;
}
