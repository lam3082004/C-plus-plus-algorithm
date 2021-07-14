#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
using namespace std;
ll n, f[nmax], a[nmax], ans = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("SORTT.inp", "r", stdin);
    freopen("SORTT.out", "w", stdout);
#endif // ONLINE_JUDGE

    cin >> n;
    fo(i, 1, n)
    {
        cin >> a[i];
        f[a[i]] = f[a[i] - 1] + 1;
        ans = max(ans, f[a[i]]);
    }
    cout << n - ans;
}