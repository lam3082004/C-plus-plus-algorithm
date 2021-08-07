#include <bits/stdc++.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define ll long long
#define nmax 1000005
#define ii pair<ll, ll>
#define fi first
#define se second
const ll mod = 1e9 + 7;
using namespace std;
ll n, f[nmax];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("SH6.inp", "r", stdin);
    freopen("SH6.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    f[1] = 1;
    f[2] = 1;
    fo(i, 3, 85)
        f[i] = f[i - 1] + f[i - 2];
    for (int i = 84; i >= 1; i--)
    {
        if (f[i] < n)
        {
            cout << f[i];
            return 0;
        }
    }
}
