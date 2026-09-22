#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n;
    string s;
    cin >> s;
    n = s.size();

    vector<int> f(2);
    for(char c : s) f[c - '0']++;

    for(int i = 0; i < n; i++){
        int x = (s[i] == '0')? 0 : 1;
        if(f[!x] > 0) f[!x]--;
        else{
            cout << n - i;
            return;
        }
    }

    cout << 0;
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
