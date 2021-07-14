#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
const ll mod = 1e9 + 7;
using namespace std;
map<ll, ll> f;
ll a[nmax], b[nmax], s[nmax];
ll ans = 0, n, k;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("TBCK.inp", "r", stdin);
    freopen("TBCK.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> k;
    fo(i, 1, n)
    {
        cin >> a[i];
        b[i] = a[i] - k;
        s[i] = s[i - 1] + b[i];
    }
    f[0] = 1;
    fo(i, 1, n)
    {
        ans += f[s[i]];
        f[s[i]]++;
    }
    cout << ans;
}