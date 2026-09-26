#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n, m;
    cin >> n >> m;

    int minus = 0, mi = 101;
    ll sum = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int x;
            cin >> x;
            if(x < 0) minus++;

            mi = min(mi, abs(x));
            sum += abs(x);
        }
    }

    if(minus % 2) sum -= 2 * mi;
    
    cout << sum;
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
