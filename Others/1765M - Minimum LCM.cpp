#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n;
    cin >> n;

    int c = n - 1;
    for(int i = 1; i * i <= n; i++){
        if(n % (i + 1) == 0){
            c = i;
            break;
        }
    }

    int a = n / (c + 1);
    cout << a << ' ' << a * c;
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
