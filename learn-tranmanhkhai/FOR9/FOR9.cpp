#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, z = 0, x[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("FOR9.inp", "r", stdin);
    freopen("FOR9.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    z = 1;
    fo(i, 2, n)
    {
        x[1] = 1;
        x[i] = (x[i - 1] * i) % mod;
        z = (z + x[i]) % mod;
    }
    // fo(i, 1, n) z = (z + x[i]) % mod;
    cout << z;
}
