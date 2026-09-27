#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    ll a, b;
    cin >> a >> b;

    if(a != b && a % 2 && b % 2){
        cout << -1;
        return;
    }

    int msba = -1, msbb = -1;
    for(int i = 63; i >= 0; i--){
        if(msba == -1 && ((a >> i) & 1)) msba = i;
        if(msbb == -1 && ((b >> i) & 1)) msbb = i;
    }

    int cnt = 0;
    int diff = abs(msba - msbb);
    
    if(a > b){
        while(a % 2 == 0 && diff--){
            a = a >> 1;
        }
    }
    else if(b % 2 == 0 && a < b){
        a = a << diff;
    }
    
    if(a == b){
        diff = abs(msba - msbb);
        cnt = diff / 3;
        if(diff % 3) cnt++;
        
        cout << cnt;
    }
    else cout << -1;
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
