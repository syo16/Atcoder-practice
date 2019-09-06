#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;


int main() {
    int s;
    cin >> s;
    string ans;
    int s1 = s % 100;
    int s2 = (s - s%100) / 100;

    if ((s1 >= 1 && s1 <= 12) && (s2 >= 1 && s2 <= 12)) {
        ans = "AMBIGUOUS";
    } else if (s1 >= 1 && s1 <= 12) {
        ans ="YYMM";
    } else if (s2 >= 1 && s2 <= 12) {
        ans = "MMYY";
    } else {
        ans = "NA";
    }
    
    cout << ans << endl;
}

