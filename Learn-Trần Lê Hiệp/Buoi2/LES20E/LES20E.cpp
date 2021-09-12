#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll C[5005][5005], n, k, base;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES20E.inp", "r", stdin);
    freopen("LES20E.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> k >> n >> base;
    fo(i, 0, k)
    {
        fo(j, i, n)
        {

            if (i == 0 || i == j)
                C[i][j] = 1;
            else
                C[i][j] = (C[i][j - 1] + C[i - 1][j - 1]) % base;
        }
    }
    cout << C[k][n];
}
