#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n;
    cin >> n;
    n--;

    int msb = -1;
    for(int i = 21; i >= 0; i--){
        if((n >> i) & 1){
            msb = i;
            break;
        }
    }

    for(int i = n; i >= (1 << msb); i--){
        cout << i << ' ';
    }

    cout << 0 << ' ';

    for(int i = (1 << msb) - 1; i >= 1; i--){
        cout << i << ' ';
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
