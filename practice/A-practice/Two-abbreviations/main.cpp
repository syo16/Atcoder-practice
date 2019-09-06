#include <iostream>
#include <string>

using namespace std;

long long gcd(long long a, long long b) {
    if (a < b) swap(a, b);
    if (a % b) return gcd(b, a%b);
    else return b;
}

int N, M;
string S, T;

long long solve() {
    int d = gcd(N, M);
    
    for (int i = 0, j = 0; i < N && j < M; i += N/d, j += M / d) {
        if (S[i] != T[j]) {
            return -1;
        }
    }
    return 
}

int main() {
    long long a, b;
    string s,t,c,d;
    cin >> a >> b >> s >> t;
    long long g = gcd(a, b);
    for (int i = 0; i < a; i+= a/g) c.push_back(s[i]);
    for (int j = 0; j < b; j+= b/g) c.push_back(t[j]);
    cout << (c ==d?a/g*b: -1);
    
    return 0;
}