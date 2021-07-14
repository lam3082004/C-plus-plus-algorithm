#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 500005
using namespace std;
ll n, k, a[nmax], x[45];
ll dem = 0, dem1 = 0;
void nhap()
{
    cin >> n >> k;
    fo(i, 1, n) cin >> a[i];
}
void check()
{
    ll s = 0;
    dem1 = 0;
    fo(i, 1, n)
    {
        if (x[i] == 0)
        {
            s += a[i];
            dem1++;
        }
    }
    if (s / dem1 >= k && dem1 != 0)
        dem++;
}
int qlui(int j)
{
    fo(i, 0, 1)
    {
        a[j] = i;
        if (j == n)
            check();
        else
            qlui(j + 1);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    nhap();
    qlui(1);
    cout << dem;
}
