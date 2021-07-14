#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
using namespace std;
ll n, b[nmax], a[nmax], f[nmax], k, ans = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("NUMBER.inp", "r", stdin);
    freopen("NUMBER.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> k;
    fo(i, 1, n)
    {
        cin >> a[i];
        b[i] = a[i] % k;
        f[b[i]]++;
    }
    sort(b + 1, b + 1 + n);

    n = unique(b + 1, b + 1 + n) - b - 1;

    b[n + 1] = k;

    fo(i, 1, (k - 1) / 2)
        ans += max(f[i], f[k - i]);

    if (f[0] != 0)
        ans++;
    if (k % 2 == 0 && f[k / 2] != 0)
        ans++;
    cout << ans;
}
