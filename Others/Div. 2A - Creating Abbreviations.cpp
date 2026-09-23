#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n, m;
    cin >> n >> m; 

    vector<string> w(n), a(m);
    vector<int> f(26);
    for(int i = 0; i < n; i++){
        cin >> w[i];
        f[w[i][0] - 'a']++;
    }

    for(int i = 0; i < m; i++) cin >> a[i];

    for(int i = 0; i < m; i++){
        for(char c : a[i]){
            if(f[c - 'A'] <= 0) {
                cout << "NO";
                return;
            }
        }
    }

    cout << "YES";
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
