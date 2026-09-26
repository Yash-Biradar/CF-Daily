#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve(){
    string a, b;
    cin >> a >> b;

    int ans = 0;
    for(int i = 0; i < (int) a.size(); i++){
        string s = "";
        int size = 0;
        for(int j = i; j < (int) a.size(); j++){
            s += a[j];
            size++;

            if(b.find(s) != string::npos) {
                ans = max(ans, size);
            }
        }
    }

    cout << (int) a.size() + (int) b.size() - 2 * ans;
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
