#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 200005
#define fi first
#define se second
#define ii pair<ll, ll>
const ll mod = 1e9 + 7;
using namespace std;
ll n, d, b[nmax], dem = 0;
ii a[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES19B.inp", "r", stdin);
    freopen("LES19B.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> d;
    fo(i, 1, n)
    {
        cin >> a[i].fi >> a[i].se;
    }
    fo(i, 1, n)
    {
        if (a[i].fi * a[i].fi + a[i].se * a[i].se <= d * d)
            dem++;
    }
    cout << dem;
}
