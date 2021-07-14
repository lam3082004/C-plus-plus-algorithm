#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1000000007;
using namespace std;
ll x, n, m;
ll nhan(ll a, ll b, ll c)
{
    if (b == 0)
        return 0;
    ll tam = nhan(a, b / 2, c);
    tam = (tam + tam) % c;
    if (b % 2 == 1)
        tam = (tam + a) % c;
    return tam;
}
ll mu(ll a, ll b, ll c)
{
    if (b == 0)
        return 1;
    ll tam = mu(a, b / 2, c);
    tam = nhan(tam, tam, c) % c;
    if (b % 2 != 0)
        tam = nhan(tam, a, c) % c;
    return tam;
}
ll tong(ll a, ll b, ll c)
{
    if (b == 1)
        return a;
    ll tam = tong(a, b / 2, c);
    tam = (tam + mu(a, b / 2, c) * tam) % c;
    if (b % 2 != 0)
        tam = (tam + mu(a, b, c)) % c;
    return tam;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("tinhtong.out", "w", stdout);
    freopen("tinhtong.inp", "r", stdin);
#endif // ONLINE_JUDGE
    cin >> x >> n;
    ll m = 1e9 + 7;
    cout << tong(x, n, m) + 1;
}
