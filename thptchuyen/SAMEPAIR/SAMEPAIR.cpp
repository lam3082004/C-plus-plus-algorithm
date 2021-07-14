#include <bits/stdc++.h>
#define fo(i, a, b) for (int i = a; i <= b; ++i)
#define ll long long
#define task "TD"
using namespace std;
const ll maxn = 1e6;
ll l, r, f[maxn + 5], res = 0, ID[maxn + 5], k, q, c[maxn + 5];
///-----------------------------------------
void sieve()
{
    memset(f, 0, sizeof(f));
    fo(i, 2, trunc(sqrt(maxn))) if (f[i] == 0)
        fo(j, i, maxn / i) if (f[i * j] == 0) f[i * j] = i;
    fo(i, 2, maxn) if (f[i] == 0) f[i] = i;
    fo(i, 2, maxn)
    {
        ID[i] = 1;
        k = i;
        q = 0;
        while (f[k] != 0)
        {
            if (f[k] != q)
            {
                ID[i] *= f[k];
                q = f[k];
            }
            k /= f[k];
        }
    }
}
///-----------------------------------------
void read()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen(task ".inp", "r", stdin);
    //freopen(task ".out", "w", stdout);
    cin >> l >> r;
}
///-----------------------------------------
void solve()
{
    sieve();
    fo(i, l, r) c[ID[i]]++;
    fo(i, 1, maxn) res += (c[i] * (c[i] - 1)) / 2;
    cout << res;
}
///-----------------------------------------
int main()
{
    read();
    solve();
}