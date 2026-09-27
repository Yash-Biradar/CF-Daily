#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    for(int i = 0; i < n - 1; i++){
        if(s[i] > s[i + 1]){
            cout << "YES" << endl;
            cout << i + 1 << ' ' << i + 2;
            return;
        }
    }

    cout << "NO";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
        if(t != 0) cout << '\n';
    }
}
