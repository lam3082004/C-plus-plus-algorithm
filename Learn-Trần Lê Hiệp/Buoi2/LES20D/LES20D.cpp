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
    {
        s *= i;
    }
    return s;
}
ll C(ll k, ll n)
{
    return gt(n) / (gt(k) * gt(n - k));
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES20D.inp", "r", stdin);
    freopen("LES20D.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> a >> b;
    cout << C(a, b);
}
