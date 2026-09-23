#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n, D;
    cin >> n >> D;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    int l = -1, r = n - 1;
    int cnt = 0;
    while(l < r){
        int play = D / a[r] + 1;
        play--;
        if(l + play < r){
            l += play;
            r--;
            cnt++;
        }
        else break;
    }

    cout << cnt;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
        if(t != 0) cout << '\n';
    }
}
