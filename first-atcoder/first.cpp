#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int x, y, z;
    int N, Y;
 
    cin >> N >> Y;
 
    for (x = 0; x <= N; x++) {
        for (y = 0; y <= N; y++) {
            for (z = 0; z <= N; z++ ) {
                if ((N == x + y + z) && Y == 10000 * x + 5000 * y + 1000 * z) {
                    goto FINISH;
                }
            }
        }
    }
    FINISH:
    
 
    cout << x << y << z << endl;
}