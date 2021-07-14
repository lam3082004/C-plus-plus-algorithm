#include <bits/stdc++.h>
#define nmax 100005
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
ll n, a[nmax], z = 0;
ll tcs(ll x)
{
    ll s = 0;
    while (x > 0)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("af11.inp", "r", stdin);
    freopen("af11.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
    {
        cin >> a[i];
        z += tcs(a[i]);
    }
    cout << z;
}
