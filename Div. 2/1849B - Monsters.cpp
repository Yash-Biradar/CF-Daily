#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> a;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if(x % k == 0) a.push_back({-k, i + 1});
        else a.push_back({-1 * (x % k), i + 1});
    }

    sort(a.begin(), a.end());

    for(auto x : a) cout << x.second << ' ';
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
