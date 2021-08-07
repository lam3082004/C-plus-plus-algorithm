#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, minn = 0, minn1 = 1e9;
ll a[nmax];
ll f[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("BTAP.inp", "r", stdin);
    freopen("BTAP.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
    {
        cin >> a[i];
        f[a[i]]++;
    }
    fo(i, 1, nmax)
    {
        minn = max(minn, f[i]);
    }
    //fo(i, 1, 10) cout << f[a[i]] << ' ';
    fo(i, 1, nmax)
    {
        if (minn == f[i])
        {
            cout << i;
            return 0;
        }
    }
    cout << minn;
    //cout << minn1 << ' ' << minn << ' ';
}
