#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define MOD 1000000007

vector<unordered_map<string, int>> memo(200);
int N;

bool ok(string s) {
    if (s.find("AGC") != string::npos) {
        return false;
    }
    for (int i = 0; i < 3; i++) {
        string copied = s;
        char tmp = copied[i];
        copied[i] = copied[i+1];
        copied[i+1] = tmp;
        if (copied.find("AGC") != string::npos) {
            return false;
        }
    }
    return true;
}

int dfs(int cur, string last) {
    auto it = memo[cur].find(last);
    if (it != memo[cur].end()) {
        return memo[cur][last];
    }
    if (cur == N) return 1;
    int cnt = 0;
    for (auto c: "AGCT") {
        if (c == 0) continue;
        string newstr = last + c;
        if (ok(newstr)) {
            cnt = (cnt + dfs(cur+1, newstr.substr(1))) % MOD;
        }
    }
    memo[cur][last] = cnt;
    return cnt;
}
int main() {
    cin >> N;
    cout << dfs(0, "XXX") << endl;
    
}
