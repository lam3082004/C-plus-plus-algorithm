#include <bits/stdc++.h>
#define nmax 100005
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
ll m, n, dem = 0;
ll a[55][55], f[1005][1005];
ll sum(ll x1, ll y1, ll x2, ll y2)
{
    return f[x2][y2] - f[x1 - 1][y2] - f[x2][y1 - 1] + f[x1 - 1][y1 - 1];
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("raki.inp", "r", stdin);
    freopen("raki.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> m >> n;
    fo(i, 1, m)
        fo(j, 1, n)
    {
        cin >> a[i][j];
        f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + a[i][j];
    }
    fo(u, 1, m)
        fo(v, 1, n)
            fo(x, 1, u)
                fo(y, 1, v)
    {
        if (sum(x, y, u, v) % 9 == 0)
            dem++;
    }
    cout << dem;
}
