#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n, p;
    cin >> n >> p;

    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++) cin >> a[i].second;
    for(int i = 0; i < n; i++) cin >> a[i].first;

    sort(a.begin(), a.end());

    ll cnt = 0, ans = p;
    for(int i = 0; i < n; i++){
        if(cnt >= n - 1) break;

        if(a[i].first < p){
            ans += a[i].first * min(1LL * a[i].second, n - 1 - cnt);
            cnt += a[i].second;
        }
        else{
            cnt = n - 1 - cnt;
            ans += p * cnt;
            break;
        }
    }

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
