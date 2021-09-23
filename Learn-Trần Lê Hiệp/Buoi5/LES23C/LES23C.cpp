#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, s = 1e9, p = 0, c[nmax], a[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES23C.inp", "r", stdin);
    freopen("LES23C.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
    {
        cin >> a[i];
        p += a[i];
        c[i] = c[i - 1] + a[i];
    }
    fo(i, 1, n - 1) s = min(s, abs(p - 2 * c[i]));
    cout << s;
}