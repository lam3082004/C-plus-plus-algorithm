#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll a, b;
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
    freopen("LES21F.inp", "r", stdin);
    freopen("LES21F.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> a >> b;
    ll k = b;
    ll n = a + b - 1;
    ll x = gt(n) % mod;
    ll y = mu(gt(k), mod - 2) % mod;
    ll z = mu(gt(n - k), mod - 2) % mod;
    cout << (((x * y) % mod) * z) % mod;
}