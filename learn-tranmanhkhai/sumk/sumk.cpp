#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
const ll mod = 1e9 + 7;
using namespace std;
ll n, x[35], a[nmax], s, dem = 0;
void nhap()
{
    cin >> n >> s;
    fo(i, 1, n) cin >> a[i];
}
void check()
{
    ll sum = 0;
    fo(i, 1, n)
    {
        if (x[i] == 0)
            sum += a[i];
    }
    if (sum == s)
        dem++;
}
void qlui(ll k)
{
    fo(j, 0, 1)
    {
        x[k] = j;
        if (k == n)
            check();
        else
            qlui(k + 1);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("sumk.inp", "r", stdin);
    freopen("sumk.out", "w", stdout);
#endif // ONLINE_JUDGE
    nhap();
    qlui(1);
    cout << dem;
}
