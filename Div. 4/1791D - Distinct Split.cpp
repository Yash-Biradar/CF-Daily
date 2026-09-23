#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n;
    cin >> n; 

    string s;
    cin >> s;

    unordered_set<char> s1, s2;
    vector<int> a(n), b(n);

    for(int i = 0; i < n; i++){
        s1.insert(s[i]);
        a[i] = s1.size();
    }

    for(int i = n - 1; i >= 0; i--){
        s2.insert(s[i]);
        b[i] = s2.size();
    }

    int ans = 2;
    for(int i = 0; i < n - 1; i++){
        ans = max(ans, a[i] + b[i + 1]);
    }

    cout << ans;
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
