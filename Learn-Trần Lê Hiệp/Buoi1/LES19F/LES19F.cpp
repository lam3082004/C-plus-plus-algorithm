#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 200005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
int k, n, a[nmax];
map<int, ii> f;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES19F.inp", "r", stdin);
    freopen("LES19F.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> k;
    fo(t, 1, k)
    {
        cin >> n;
        ll s = 0;
        fo(i, 1, n)
        {
            cin >> a[i];
            s += a[i];
        }
        fo(i, 1, n)
        {
            if (f[s - a[i]].fi != 0 && f[s - a[i]].fi != t)
            {
                cout << "YES" << '\n';
                cout << f[s - a[i]].fi << ' ' << f[s - a[i]].se << '\n';
                cout << t << ' ' << i;
                return 0;
            }
            f[s - a[i]] = {t, i};
        }
    }
    cout << "NO";
}
