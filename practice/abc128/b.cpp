#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, sco;
    cin >> n;
    string res;
    vector<pair<pair<string, int>,int>> p(n);
    
    for (int i = 0; i < n; i++) {
        cin >> res >> sco;
        p.at(i) = make_pair(make_pair(res, (-1)*sco), i);
    }
    sort(p.begin(), p.end());

    for (int i = 0; i < n; i++) cout << p.at(i).second + 1 << endl;
}

