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
        a[i].second = i;
    }

    sort(a.begin(), a.end());

    vector<ll> pref(n);
    pref[0] = a[0].first;

    for(int i = 1; i < n; i++){
        pref[i] += pref[i - 1] + a[i].first;
    }

    vector<int> ans(n);
    ans[a[n - 1].second] = n - 1;
    
    for(int i = n - 2; i >= 0; i--){
        if(pref[i] >= a[i + 1].first){
            ans[a[i].second] = ans[a[i + 1].second];
        }
        else ans[a[i].second] = i;
    }

    for(int &val : ans) cout << val << " ";
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
