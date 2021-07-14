#include <bits/stdc++.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define ll long long
#define nmax 1000005
#define ii pair<ll, ll>
#define fi first
#define se second
const ll mod = 1e9 + 7;
using namespace std;
ll n, m, a, b, f[nmax][5];
ll s1 = 0, s2 = 0, s3 = 0, ans = 0;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("BAUCU2.inp", "r", stdin);
    freopen("BAUCU2.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    fo(i, 1, n)
    {
        cin >> a >> b;
        f[a][b]++;
    }
    fo(i, 1, n)
    {
        if ((f[i][1] > f[i][2]) && f[i][1] > f[i][3] && f[i][1] != 0)
            s1++;
        else if (f[i][2] > f[i][1] && f[i][2] > f[i][3] && f[i][2] != 0)
            s2++;
        else if (f[i][3] > f[i][1] && f[i][3] > f[i][2] && f[i][3] != 0)
            s3++;
    }
    if (s1 > s2 && s1 > s3 && s1 != 0)
        ans = 1;
    else if (s2 > s1 && s2 > s3 && s2 != 0)
        ans = 2;
    else if (s3 > s1 && s3 > s2 && s3 != 0)
        ans = 3;
    else
    {
        cout << 0;
        return 0;
    }
    cout << ans;
}
