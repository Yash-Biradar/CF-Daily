#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    int n, k;
    cin >> n >> k;

    int mi = k;
    int even = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        if(x % 2 == 0) even++;
        if(x % k == 0) mi = 0;

        mi = min(mi, k - (x % k));
    }

    if(k == 4) cout << min(mi, 2 - min(2, even)); 
    else cout << mi;
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
