#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        long long ans = a[0];
 
        int mn = a[0];
 
        for (int i = 1; i < n; i++) {
 
            if (a[i] < mn) {
                mn = a[i];
            }
 
            ans += mn;
        }
 
        cout << ans << endl;
    }
 
    return 0;
}