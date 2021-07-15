#include <bits/stdc++.h>
#define nmax 100005
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
int n, x;
ll f[2][nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("DAY_SO.inp", "r", stdin);
    freopen("DAY_SO.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        f[1][i] = f[0][i - 1] + x;
        f[0][i] = max(f[0][i - 1], f[1][i - 1]);
    }
    // fo(i, 0, 1)
    // {
    //     fo(j, 0, n)
    //     {
    //         cout << f[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
    cout << max(f[1][n], f[0][n]);
}
