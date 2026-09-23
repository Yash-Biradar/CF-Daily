#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n, x;
    cin >> n >> x;

    int mi, mx;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;

        if(i == 0){
            mi = mx = a;
            continue;
        }

        if(a > mx){
            if(a - mi <= 2 * x) mx = a;
            else{
                cnt++;
                mx = mi = a;
            }
        }
        else if(a < mi){
            if(mx - a <= 2 * x) mi = a;
            else{
                cnt++;
                mx = mi = a;
            }
        }
    }

    cout << cnt;
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
