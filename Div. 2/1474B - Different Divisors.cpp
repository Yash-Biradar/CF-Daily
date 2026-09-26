#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int d;
    cin >> d;

    auto prime = [&](int n){
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0) return false;
        }

        return true;
    };

    if(d == 1) cout << 6;
    else {
        int ans = 1;
        int n = d + 1;
        while(!prime(n)) n++;
        
        ans *= n;
        n += d;
        while(!prime(n)) n++;

        ans *= n;

        cout << ans;
    }
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
