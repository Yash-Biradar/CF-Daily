#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int a, b;
    cin >> a >> b;

    int cnt = 1e9;
    int c = 0;
    if(b == 1) {
        b++, c++;
    }
    
    int ans = 1e9;
    while(cnt == ans){
        int x = a;
        cnt = c++;
        while(x > 0){
            x /= b;
            cnt++;
        }
        ans = min(ans, cnt);
        b++;
    }

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
