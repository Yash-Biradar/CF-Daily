#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n;
    cin >> n;
    char c ;
    cin >> c;

    string s;
    cin >> s;

    vector<int> nextg(n);
    int gind = -1;

    for(int i = n - 1; i >= 0; i--){
        if(s[i] == 'g') gind = i;
        nextg[i] = gind - i;
    }

    if(s[n - 1] != 'g') nextg[n - 1] = nextg[0] + 1;
    for(int i = n - 2; i >= 0; i--){
        if(nextg[i] < 0) nextg[i] = nextg[i + 1] + 1;
        else break;
    }

    int mx = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == c) mx = max(mx, nextg[i]);
    }

    cout << mx;
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
