#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, c = 0;
        cin >> n;
        for (int i = 0, x; i < n; i++) {
            cin >> x;
            c += x;
        }
        cout << (2 * c >= n ? "Bessie" : "Elsie") << '\n';
    }
    return 0;
}