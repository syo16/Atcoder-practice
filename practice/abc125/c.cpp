#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

const int N = (1e5) + 5;
int n, a[N];
int L[N];
int R[N];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i <= n; i++) {
        L[i] = __gcd(L[i - 1], a[i]);
    }
    for (int i = n; i >= 1; i--) {
        R[i] = __gcd(a[i], R[i + 1]);
    }
    int mx = 1;
    for (int i = 1; i <= n; i++) {
        mx = max(mx, __gcd(L[i - 1], R[i+1]));
    }

    printf("%d\n", mx);
}

