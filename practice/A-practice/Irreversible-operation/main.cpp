#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    int ans = 0, b = 0;
    
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == 'B') b++;
        else 
            ans +=b;
    }
    
    cout << ans;
    
    return 0;
}