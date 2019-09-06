#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int k[m];
    for (int i = 0; i < m; i++) {
        cin >> k[i];
        int s[k[i]];
        for(int j = 0; j < k[i]; j++) {
            cin >> s[j];
        }
    }
    int p[m];
    for (int i = 0; i < m; i++) {
        cin >> p[i];
    }

}
