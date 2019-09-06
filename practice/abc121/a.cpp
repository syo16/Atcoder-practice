#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W, h, w;
    cin >> H >> W >> h >> w;
    int ans = H * W;
    ans -= h * W; 
    if (ans > 0) {
        ans -= w * (H - h);
    }
    cout << ans << endl;
}
