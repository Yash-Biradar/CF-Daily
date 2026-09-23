#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    ll w, h;
    cin >> w >> h;

    vector<int> b(4);
    for(int i = 0; i < 4; i++){
        int k;
        cin >> k;
        for(int j = 0; j < k; j++){
            int x;
            cin >> x;
            if(j == 0) b[i] -= x;
            if(j == k - 1) b[i] += x;
        }
    }
    
    ll ans = 1;
    ans = max(ans, b[0] * h);
    ans = max(ans, b[1] * h);
    ans = max(ans, b[2] * w);
    ans = max(ans, b[3] * w);

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
