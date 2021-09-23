#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, m, dp[5005][5005];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES21E.inp", "r", stdin);
    freopen("LES21E.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> m;
    fo(i, 1, n) dp[i][1] = 1;
    fo(i, 1, m) dp[1][i] = 1;
    fo(i, 2, n)
        fo(j, 2, m)
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
    cout << dp[n][m] % mod;
}