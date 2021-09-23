#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax], dem = 0, maxx = 1;
ll d[nmax], f[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES22E.inp", "r", stdin);
    freopen("LES22E.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
    {
        cin >> a[i];
        d[a[i]]++;
    }
    fo(i, 2, nmax)
    {
        for (int j = i; j <= nmax; j += i)
        {
            if (d[j] >= 0)
            {
                f[i] += d[j];
                if (f[j] >= 2)
                    break;
            }
        }
    }
    for (int i = nmax; i >= 1; i--)
    {
        if (f[i] >= 2)
        {
            cout << i;
            return 0;
        }
    }
    // cout << maxx;
}