#include <bits/stdc++.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define ll long long
#define nmax 1000005
#define ii pair<ll, ll>
#define fi first
#define se second
const ll mod = 1e9 + 7;
using namespace std;
ll n, m, x[155], a[nmax];
ll dem = 0, s = 0;
void nhap()
{
    cin >> n >> m;
    fo(i, 1, n) cin >> a[i];
}
void check()
{
    s = 0;
    fo(i, 1, n)
    {
        if (x[i] == 0)
            s += a[i];
    }
    if (s <= m)
        dem++;
}
void bk(int i)
{
    fo(j, 0, 1)
    {
        x[i] = j;
        if (i == n)
            check();
        else
            bk(i + 1);
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Golds.inp", "r", stdin);
    freopen("Golds.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    nhap();
    bk(1);
    cout << dem;
}
