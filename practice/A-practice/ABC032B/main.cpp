#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main() {
    string s;
    int k;
    cin >> s;
    cin >> k;
    
    std::set<string> word;
    int ans {0};
    
    if (s.length() < k) {
        ans = 0;
    } else {
        for (int i = 0; i < s.length() - k + 1; i++) {
            word.insert(s.substr(i, k));
        }
        ans = word.size();
    }
    
    cout << ans << endl;
    
    return 0;
}