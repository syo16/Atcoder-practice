#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    int first=0, last, middle;
    for (int i = 0; i < S.length(); i++) {
        if (i==S.length()-1 || S[i] == 'L' && S[i+1] == 'R') {
            last = i+1;
            int l = last - first;
            int half[2];
            if (l%2) {
                half[first%2] = l/2+1;
                half[1-first%2] = l/2;
            } else {
                half[0] = half[1] = l/2;
            }
            for (int j = first; j < last; j++) {
                if (j < middle || j>middle+1) cout << "0 ";
                else cout << half[j%2] << " ";
            }
            first = i+1;
        } else if (S[i] == 'R' && S[i+1] == 'L') middle = i;
    }
    cout << endl;
}
