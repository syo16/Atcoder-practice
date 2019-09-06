#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll a, b;
    cin >> a >> b;
    a--;
    ll res_a, res_b;
    if (a % 4 == 0) {
        res_a = a;
    } else if (a % 4 == 1) {
        res_a = 1;
    } else if (a%4 == 2) {
        res_a = a+1;
    } else {
        res_a = 0;
    }

    if (b%4==0) {
        res_b = b;
    } else if (b%4==1) {
        res_b = 1;
    } else if (b%4==2) {
        res_b = b+1;
    } else {
        res_b = 0; 
    }
    cout << (res_a^res_b) << endl;
}
