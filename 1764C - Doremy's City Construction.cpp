#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    if(a[0] == a[n - 1]){
        cout << n / 2;
        return;
    }

    ll mx = 0;
    for(int i = 1; i < n; i++){
        if(a[i] != a[i - 1]){
            int left = i;
            int right = n - i;
            mx = max(mx, 1LL * left * right);
        }
    }

    cout << mx;
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
