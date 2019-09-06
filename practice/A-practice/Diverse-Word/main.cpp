#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
//    string S;
//    string alphabet = {"abcdefghijklmnopqrstuvwxyz"};
//    cin >> S;
//    
//    if (S == "zyxwvutsrqponmlkjihgfedcba") {
//        cout << -1 << endl;
//    } else {
//        if (S.length == 26) {
//            for (int i {S.length()}; i > 0; i--) {
//                
//            }
//            cout << << endl;
//        } else {
//            for (int i {0}; i < alphabet.length; i++) {
//                if (S.find(alphabet[i]) == npos) {
//                    cout << S << alphabet[i] << endl;
//                    break;
//                }
//            }
//        }
//    }
//    
//    return 0;

    string s;
    cin >> s;
    int N = s.length();
    if (N <26) {
        for (char i = 'a'; i <= 'z'; i++) {
            if (s.find(i) == -1) {
                cout << s << i;
                return 0
            }
        }
    } else {
        set<char>x;
        while(!s.empty()) {
            char p = s.back();
            s.pop_back();
            x.insert(p);
            if (*x.rbegin() !=p) {
                cout << x << *x.uppser_bound(p);
                return 0;
            }
        }
    }
    cout << -1;
}