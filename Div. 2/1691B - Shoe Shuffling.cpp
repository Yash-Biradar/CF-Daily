#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n;
    cin >> n;

    vector<int> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    vector<int> ans(n);
    int f = 0;
    for(int i = 1; i < n; i++){
        if(s[i] == s[f]){
            ans[i - 1] = i;
        }
        else{
            if(f == i - 1){
                cout << -1;
                return;
            }
            ans[i - 1] = f;
            f = i;
        }
    }

    if(f == n - 1) cout << -1;
    else{
        ans[n - 1] = f;
        for(int &val : ans) cout << val + 1 << ' ';
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
