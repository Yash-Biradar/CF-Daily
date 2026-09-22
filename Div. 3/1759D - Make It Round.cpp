#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n, m;
    cin >> n >> m;

    int a = n, x = 0, y = 0;
    while(a > 0 && a % 2 == 0){
        a /= 2;
        if(a > 0) x++;
    }
    a = n;
    while(a > 0 && a % 5 == 0){
        a /= 5;
        if(a > 0) y++;
    }

    ll k = 1;

    if(x > y){
        while(y++ != x){
            if(k * 5 <= m) k *= 5;
            else break;
        }
    }
    else {
        while(x++ != y){
            if(k * 2 <= m) k *= 2;
            else break;
        }
    }

    while(1){
        if(k * 10 <= m) k *= 10;
        else break;
    }
    for(int i = 9; i >= 2; i--){
        if(k * i <= m){
            k *= i;
            break;
        }
    }
    
    cout << n * k;
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
