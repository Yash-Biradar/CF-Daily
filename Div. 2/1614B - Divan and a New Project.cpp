#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n;
    cin >> n;

    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    vector<int> ans(n + 1);
    int l = -1, r = 1;
    ll time = 0;
    for(auto &x : a){
        int times = x.first;
        int b = x.second;
        
        if(-l < r) ans[b] = l--;
        else ans[b] = r++;

        time += 1LL * times * abs(ans[b]);
    }

    cout << time * 2 << endl;
    for(int &val : ans) cout << val << ' ';
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
