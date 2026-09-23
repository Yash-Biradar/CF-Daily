#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n, r, b;
    cin >> n >> r >> b;

    int x = r / (b + 1);
    int y = r % (b + 1);

    for(int i = 0; i < b; i++){
        for(int i = 0; i < x; i++) cout << 'R';
        if(y-- > 0) cout << 'R';

        cout << 'B';
    }

    for(int i = 0; i < x; i++) cout << 'R';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
        if(t != 0) cout << endl;
    }
}
