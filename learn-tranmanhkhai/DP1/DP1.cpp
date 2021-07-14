#include <bits/stdc++.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define ll long long
#define nmax 1000005
#define ii pair<ll, ll>
#define fi first
#define se second
const ll mod = 1e9 + 7;
using namespace std;
string s;
ll f[nmax], minn = 1e12;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("DP1.inp", "r", stdin);
    freopen("DP1.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    fo(i, 0, s.size() - 1)
    {
        f[s[i] - '0']++;
    }
    fo(i, 0, 9)
    {
        minn = min(minn, f[i]);
    }
    cout << minn;
}
