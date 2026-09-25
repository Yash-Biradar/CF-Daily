#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int a, b;
    cin >> a >> b;

    int xo = 0;
    int an = a - 1;
    if(an % 4 == 0) xo = an;
    else if(an % 4 == 1) xo = 1;
    else if(an % 4 == 2) xo = an + 1;
    else xo = 0;

    if(xo == b) cout << a;
    else if(a == (b ^ xo)) cout << a + 2;
    else cout << a + 1;
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
