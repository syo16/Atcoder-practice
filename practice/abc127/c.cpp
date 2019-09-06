#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int p[m][2];
    int right_min = n;
    int left_max = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> p[i][j];
        }
        if (p[i][0] >= left_max) {
            left_max = p[i][0];
        }
        if (p[i][1] <= right_min) {
            right_min = p[i][1];
        }
    }
    bool check = right_min - left_max + 1 > 0;

    if(check) {
        cout << right_min - left_max + 1 << endl;
    } else {
        cout << 0 << endl;
    }
}
