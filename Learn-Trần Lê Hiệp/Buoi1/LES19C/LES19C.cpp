#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, f[nmax], k;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES19C.inp", "r", stdin);
    freopen("LES19C.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    f[1] = 7 % n;
    fo(i, 2, nmax)
        f[i] = (f[i - 1] * 10 + 7) % n;
    // fo(i, 1, n + 1) cout << f[i] << '\n';
    fo(i, 1, n + 1)
    {
        if (f[i] % n == 0)
        {
            cout << i;
            return 0;
        }
    }
    cout << "-1";
}
