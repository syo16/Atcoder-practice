#include <iostream>
#include <vector>

using namespace std;

void dfs(int depth, vector<int> v) {
    if (depth == N) calc(v);
    for (int i = 0; i < 4; i++) {
        v[depth] = i;
        dfs(depth+1, v);
    }
}

int main() {

}
