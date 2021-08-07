#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, s = 0, z, minn1 = 1e9;
ll a[nmax], m;
ll f[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("ELEC.inp", "r", stdin);
    freopen("ELEC.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> m;
    if (m == 1)
    {
        cout << 0;
        return 0;
    }
    fo(i, 1, n)
    {
        cin >> a[i];
        s += a[i];
    }
    sort(a + 1, a + n + 1);
    ll s1 = a[n];
    for (int i = n - 1; i >= 1; i--)
    {
        if (s1 >= m)
        {
            cout << n - i;
            return 0;
        }
        else
        {
            s1 += a[i] - 1;
        }
    }
    cout << "-1";
}
