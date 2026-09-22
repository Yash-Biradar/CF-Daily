#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n;
    cin >> n;

    vector<vector<int>> a;
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;

        vector<int> temp(m);
        for(int i = 0; i < m; i++) cin >> temp[i];
        sort(temp.begin(), temp.end());

        a.push_back(temp);
    }

    sort(a.begin(), a.end());

    ll ans = a[0][0];
    int mi = 1e9;
    for(int i = 0; i < n; i++){
        ans += a[i][1];
        mi = min(mi, a[i][1]);
    }

    ans -= mi;

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
