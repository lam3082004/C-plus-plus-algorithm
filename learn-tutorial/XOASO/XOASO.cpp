#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax], dem1 = 0, dem2 = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("XOASO.inp", "r", stdin);
    freopen("XOASO.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    fo(i, 1, n)
    {
        if (a[i] % 2 == 0)
            dem1++;
        else
            dem2++;
    }
    if (dem1 == 1 && dem2 == 1)
        cout << 1;
    else if (dem1 == 0 && dem2 == 1)
        cout << 0;
    else if (dem1 == 1 && dem2 == 0)
        cout << 0;
    else if (dem1 == 2 && dem2 == 0)
        cout << 1;
    else if (dem1 == 0 && dem2 == 2)
        cout << 1;
    else if (dem1 == 1 && dem2 == 2)
        cout << 1;
    else if (dem1 == 2 && dem2 == 1)
        cout << 1;
    else if (dem1 == 2 && dem2 == 2)
        cout << 2;
    else
    {
        if (dem1 % 2 == 0 && dem2 % 2 == 0)
            cout << (dem1 - 1) * dem1 / 2 + (dem2 - 1) * dem2 / 2;
        else if (dem1 % 2 == 0 && dem2 % 2 == 1)
            cout << dem2 * dem1 + dem2 * (dem2 - 1) / 2;
        else if (dem1 % 2 == 1 && dem2 % 2 == 0)
            cout << dem1 * (dem1 - 1) / 2 + dem2 * (dem2 - 1) / 2;
        else
            cout << dem2 * dem1 + dem2 * (dem2 - 1) / 2;
    }
}
