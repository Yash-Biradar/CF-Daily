    #include<bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    using ll = long long;

    void solve(){
        int n;
        cin >> n;

        map<int, int> mp;
        map<int, int> mp2;

        int cnt = 0, prev = -1;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;

            if(x == prev) cnt++;
            else{
                mp[prev] = max(mp[prev], cnt);
                cnt = 1;
            }
            prev = x;
        }
        mp[prev] = max(mp[prev], cnt);

        cnt = 0, prev = -1;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;

            if(x == prev) cnt++;
            else{
                mp2[prev] = max(mp2[prev], cnt);
                cnt = 1;
            }
            prev = x;
        }
        mp2[prev] = max(mp2[prev], cnt);

        int mx = 1;
        for(auto it = mp.begin(); it != mp.end(); it++){
            mx = max(mx, it->second + mp2[it->first]);
        }

        for(auto it = mp2.begin(); it != mp2.end(); it++){
            mx = max(mx, it->second + mp[it->first]);
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
