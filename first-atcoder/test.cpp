#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> d(n);
    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> d.at(i);
        s.insert(d.at(i));
    }
    cout << s.size() << endl;

}
