#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, s = -1e9, z, minn1 = 1e9, dem = 0, m;
ll a[405][405], dp1[405][405], dp2[405][405];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("BEAU.inp", "r", stdin);
    freopen("BEAU.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
            fo(j, 1, n)
                cin >>
        a[i][j];
    fo(i, 1, n)
    {
        fo(j, 1, n)
        {
            dp1[i][j] = dp1[i - 1][j - 1] + a[i][j];
        }
    }
    fo(i, 1, n)
    {
        fo(j, 1, n)
        {
            dp2[i][j] = dp2[i - 1][j + 1] + a[i][j];
        }
    }
    fo(x, 1, n)
        fo(y, 1, n)
            fo(t, 1, min(n - x + 1, n - y + 1))
    {
        ll u = x + t - 1;
        ll v = y + t - 1;
        ll A = dp1[u][v] - dp1[x - 1][y - 1];
        ll B = dp2[u][y] - dp2[x - 1][v + 1];
        s = max(s, A - B);
    }
    cout << s;
}
