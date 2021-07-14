#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (ll i = a; i <= b; i++)
#define nmax 100005
using namespace std;
int k, f[2005][2005], kq = 0;
string a, b;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("blast.inp", "r", stdin);
    freopen("blast.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b >> k;
    ll n = a.size();
    ll m = b.size();
    a = ' ' + a;
    b = ' ' + b;
    fo(i, 1, n)
        f[i][0] = i * k;
    fo(j, 1, m)
        f[0][j] = j * k;
    fo(i, 1, n)
    {
        for (int j = 1; j <= m; j++)
        {
            int z = abs(int(a[i]) - int(b[j]));
            f[i][j] = min({f[i - 1][j] + k, f[i][j - 1] + k, f[i - 1][j - 1] + z});
        }
    }
    cout << f[n][m];
}
