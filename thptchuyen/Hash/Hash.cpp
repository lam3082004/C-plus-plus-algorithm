#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
using namespace std;
const int mod = 1e9 + 7;
ll n, hashs[nmax], hasha[nmax], poww[nmax], q, l, r;
string s;
ll gett(ll l, ll r)
{
    return ((hashs[r] - hashs[l - 1] * poww[r - l + 1]) % mod + mod) % mod;
}
ll gets(ll l, ll r)
{
    return ((hasha[l] - hasha[r + 1] * poww[r - l + 1]) % mod + mod) % mod;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("Hash.inp", "r", stdin);
    freopen("Hash.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> s;
    s = ' ' + s;
    poww[0] = 1;
    fo(i, 1, n)
        poww[i] = (poww[i - 1] * 31) % mod;
    fo(i, 1, n)
        hashs[i] = (hashs[i - 1] * 31 + s[i] - 'a' + 1) % mod;
    for (int i = n; i >= 1; i--)
        hasha[i] = (hasha[i + 1] * 31 + s[i] - 'a' + 1) % mod;
    cin >> q;
    while (q--)
    {
        cin >> l >> r;
        if (gett(l, r) == gets(l, r))
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }
}
