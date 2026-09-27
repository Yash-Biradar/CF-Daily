#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;
    
    int cnt = 0, close = 0;
    for(char c : s){
        if(c == '(') cnt++;
        else if(cnt > 0 && c == ')') cnt--;
        else close++;
    }

    cout << min(cnt, close);
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
