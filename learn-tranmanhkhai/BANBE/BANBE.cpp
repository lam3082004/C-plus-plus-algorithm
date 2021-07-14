#include <bits/stdc++.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define fi first
#define se second
#define ii pair<ll, ll>
#define nmax 1000005
#define ll long long
const int base = 31;
const ll mod = 1e9 + 7;
using namespace std;
ll a, b, f[5000005], dem1 = 0, dem2 = 0;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("BANBE.inp", "r", stdin);
    freopen("BANBE.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    fo(i, 1, nmax)
    {
        fo(j, 1, nmax / i)
            f[i * j] += i;
        f[i] -= i;
    }
    fo(i, a, b)
    {
        if (f[f[i]] == i && i == f[i])
            dem1++;
        if (f[f[i]] == i && i != f[i] && f[i] <= b)
            dem2++;
    }
    cout << dem1 + dem2 / 2;
}
