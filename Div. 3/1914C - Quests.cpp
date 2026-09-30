#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    int mx = 0, exp = 0, max_b = 0;
    for(int i = 0; i < min(n, k); i++){
        exp += a[i];
        max_b = max(max_b, b[i]);

        int remain = k - 1 - i;
        mx = max(mx, exp + remain * max_b);
    }

    cout << mx;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
        if(t != 0) cout << '\n';
    }
}
