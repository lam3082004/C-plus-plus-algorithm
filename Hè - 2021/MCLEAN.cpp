#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 31
#define fi first
#define se second
const ll mod = 1e9 + 7;
using namespace std;
const int gh = 26;
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
int m, n, d[nmax][nmax][nmax][nmax], x[nmax], y[nmax], id, pos[nmax], kq = 1 << 30;
queue<pair<int, int>> q;
char a[nmax][nmax];
bool check(int i, int j)
{
    return (i > 0 && i <= m && j > 0 && j <= n && a[i][j] != 'x');
}
void BFS(int s, int t)
{
    d[s][t][s][t] = 0;
    assert(q.empty());
    q.push({s, t});
    while (q.size())
    {
        int i = q.front().fi;
        int j = q.front().se;
        q.pop();
        for (int tt = 0; tt < 4; tt++)
        {
            int ii = i + dx[tt];
            int jj = j + dy[tt];
            if (check(ii, jj) && d[s][t][ii][jj] == -1)
            {
                d[s][t][ii][jj] = d[s][t][i][j] + 1;
                q.push({ii, jj});
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.inp", "r", stdin);
    freopen("input.out", "w", stdout);
#endif // ONLINE_JUDGE
    memset(d, -1, sizeof(d));
    // rs(d, -1);
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'o')
                x[0] = i, y[0] = j;
            if (a[i][j] == '*')
                ++id, x[id] = i, y[id] = j;
        }
    for (int i = 1; i <= id; i++)
        pos[i] = i;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            BFS(i, j);
    do
    {
        int s = 0, qua = 0;
        for (int i = 1; i <= id && !qua; i++)
        {
            int ii = pos[i - 1], ni = pos[i];
            int dd = d[x[ii]][y[ii]][x[ni]][y[ni]];
            s += dd;
            qua = (dd == -1);
        }
        if (!qua)
            kq = min(kq, s);
    } while (next_permutation(pos + 1, pos + 1 + id));
    if (kq == 1 << 30)
        kq = -1;
    cout << kq;
}
