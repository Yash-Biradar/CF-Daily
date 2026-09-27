#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    ll n;
    cin >> n;

    auto check = [&](ll a){
        ll x = a;

        while(x > 0){
            ll digit = x % 10;
            x /= 10;
            if(digit != 0 && a % digit) return false;
        }

        return true;
    };

    for(ll i = n; i <= n + 2520; i++){
        if(check(i)) {
            cout << i;
            return;
        }
    }

    cout << n;
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
