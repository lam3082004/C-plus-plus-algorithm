#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll m, n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("CAUDO.inp", "r", stdin);
    freopen("CAUDO.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> m >> n;
    ll y = (n - 2 * m) / 2;
    ll x = m - y;
    if (x >= 0 && y >= 0 && x + y == m && 2 * x + 4 * y == n)
        cout << x << ' ' << y;
    else
        cout << " Hi, Linda xin chao ca nha";
}
