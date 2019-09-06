#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> l(n);
    int count = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    for (int i = 0; i <= n; i++) {//i<nだとエラーになったがなぜか復習する
       if (sum <= x) {
           count++;
       } 
       sum += l[i];
    }
    cout << count << endl;
}
