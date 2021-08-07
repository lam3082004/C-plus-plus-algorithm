#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax], b[nmax];
map<ll, ll> f;
ll dem1 = 0, dem2 = 0, z = 0, k, maxx = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("MAKERECT.inp", "r", stdin);
    freopen("MAKERECT.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
    {
        cin >> a[i];
        f[a[i]]++;
    }
    fo(i, 1, n)
    {
        if (f[a[i]] == 2)
        {
            b[++z] = a[i];
            f[a[i]] = 0;
        }
        else if (f[a[i]] % 2 == 0 && f[a[i]] >= 4)
        {
            k = a[i];
            f[a[i]] = 0;
        }
        maxx = max(maxx, k * k);
    }
    sort(b + 1, b + z + 1);
    cout << max(maxx, b[z] * b[z - 1]);
}
