#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
int n, s = 0, z, minn1 = 1e9, s1 = 0;
ll kq;
int a[405][405], m;
ll f[505][505], k[505][505], A[nmax], B[nmax], maxx[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("MATRIXA.inp", "r", stdin);
    freopen("MATRIXA.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> m;
    fo(i, 1, n)
            fo(j, 1, m)
                cin >>
        a[i][j];
    fo(i, 1, n)
        fo(j, 1, m)
    {
        f[i][j] = f[i][j - 1] + a[i][j];
        k[i][j] = k[i - 1][j] + a[i][j];
    }
    fo(x, 1, n - 1)
        fo(u, x + 1, n)
    {
        fo(v, 1, m)
            A[v] = k[u][v] - k[x - 1][v] + f[u][v - 1] + f[x][v - 1];
        fo(y, 1, m)
            B[y] = k[u][y] - k[x - 1][y] - f[u][y] - f[x][y];
        maxx[1] = B[1];
        fo(i, 2, m)
            maxx[i] = max(maxx[i - 1], B[i]);
        fo(j, 2, m)
            kq = max(kq, A[j] + maxx[j - 1]);
    }
    cout << kq;
}
