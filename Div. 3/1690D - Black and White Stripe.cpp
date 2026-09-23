#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int l = 0, r = k - 1;
    int mi = 0, cnt = 0;
    for(int i = l; i <= r; i++) if(s[i] == 'W') mi++;

    r++;
    cnt = mi;

    while(r < n){
        if(s[r] != s[l]){
            if(s[r] == 'W') cnt++;
            else{
                cnt--;
                mi = min(mi, cnt);
            }
        }
        r++, l++;
    }

    cout << mi;
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
