#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
map<int, int> f;
int m, n, s, dem = 0, a[1005][1005];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGEd
    freopen("SQUA.inp", "r", stdin);
    freopen("SQUA.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> m >> n >> s;
    fo(i, 1, m)
            fo(j, 1, n) cin >>
        a[i][j];
    fo(i, 1, m)
    {
        fo(j, 1, n)
        {
            dem += f[s - a[i][j]];
            f[a[i][j]]++;
        }
    }
    cout << dem;
}
