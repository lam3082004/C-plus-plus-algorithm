#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, s = 0, z, minn1 = 1e9, dem = 0;
ll a[nmax], m;
ll f[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("NEN.inp", "r", stdin);
    freopen("NEN.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
    {
        cin >> a[i];
        s = max(s, a[i]);
    }
    fo(i, 1, n)
    {
        if (a[i] == s)
            dem++;
    }
    cout << dem;
}
