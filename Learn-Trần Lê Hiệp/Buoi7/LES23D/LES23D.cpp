#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
string s;
ll dem = 0, n, f[nmax];
ll gt(ll x)
{
    ll s = 1;
    fo(i, 1, x)
        s = (s * i) % mod;
    return s;
}
ll mu(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll tam = mu(a, b / 2);
    tam = (tam * tam) % mod;
    if (b % 2 == 1)
        tam = (tam * a) % mod;
    return tam;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES21D.inp", "r", stdin);
    freopen("LES21D.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> s;
    n = s.size();
    sort(s.begin(), s.end());
    fo(i, 0, s.size() - 2)
    {
        if (s[i] != s[i + 1])
            dem++;
        f[s[i] - 'a' + 1]++;
    }
    f[s[s.size() - 1] - 'a' + 1]++;
    ll p1 = gt(n) % mod;
    ll p2 = 1;
    // fo(i, 1, 98) cout << f[i] << '\n';
    fo(i, 1, 1000000)
    {
        if (f[i] >= 2)
        {
            p2 = (p2 * mu(gt(f[i]), mod - 2) % mod) % mod;
        }
    }
    // cout << p1<<' '<< p2;
    if (dem == 0)
        cout << n - 1;
    else
        cout << p1 * p2 % mod;
}