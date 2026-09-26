#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void solve()
{
    int n;
    cin >> n;

    map<ll, int> mp;

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (mp[x])
            found = true;
        mp[x] = 1;
    }

    if (found)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        if (t != 0)
            cout << '\n';
    }
}
