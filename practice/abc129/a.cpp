#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int p, q, r;
    cin >> p >> q >> r;
    int dist_by_a = r+q;
    int dist_by_b = p+q;
    int dist_by_c = q+r;
    if (dist_by_a <= dist_by_b && dist_by_a <= dist_by_c) {
        cout << dist_by_a << endl;
    } else if (dist_by_b <= dist_by_a && dist_by_b <= dist_by_c) {
        cout << dist_by_b << endl;
    } else {
        cout << dist_by_c << endl;
    }

}

