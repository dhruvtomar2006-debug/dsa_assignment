#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long n, k;
        cin >> n >> k;
 
        long long a = 0;
 
        for (long long i = 1; i <= n; i *= 2) {
            long long cont = min(k, n / i);
            a += cont;
            n -= cont * i;
        }
 
        cout << a << "\n";
    }
 
    return 0;
}