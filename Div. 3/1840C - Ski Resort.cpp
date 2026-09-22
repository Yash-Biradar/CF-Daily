#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n, k, q;
    cin >> n >> k >> q;

    ll ans = 0, cnt = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        if(x <= q){
            cnt++;
        }
        else{
            if(cnt >= k) ans += (((cnt - k + 1) * (cnt - k + 2)) / 2);
            cnt = 0;
        }
    }
    if(cnt >= k) ans += ((cnt - k + 1) * (cnt - k + 2) / 2);

    cout << ans;
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
