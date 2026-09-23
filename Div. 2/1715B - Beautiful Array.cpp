#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    ll n, k, b, s;
    cin >> n >> k >> b >> s;

    if(b * k + n * (k - 1) < s || b * k > s){
        cout << -1;
        return;
    }

    if(k == 1){
        for(int i = 1; i < n; i++) cout << 0 << ' ';
        cout << s;
        return;
    }

    ll ex = s - b * k;

    for(int i = 0; i < n - 1; i++){
        if(ex > k - 1){
            cout << k - 1 << ' ';
            ex -= k - 1;
        }
        else if(ex > 0){
            cout << ex << ' ';
            ex = 0;
        }
        else cout << 0 << ' ';
    }

    cout << b * k + ex;
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
