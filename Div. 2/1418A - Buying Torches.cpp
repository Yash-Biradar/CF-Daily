#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int x, y, k;
    cin >> x >> y >> k;

    y++;
    ll ans = 1LL * y * k - 1;

    if(x == 2){
        cout << ans + k;
        return;
    }

    ll cnt = 0;
    if(ans % (x - 1) != 0) cnt++;
    cnt += ans / (x - 1);

    cout << cnt + k;
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
