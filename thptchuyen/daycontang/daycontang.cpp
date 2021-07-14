#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1005
using namespace std;
int n, a[nmax], b[nmax], f[nmax], l[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
    {
        cin >> a[i];
        f[i] = 1;
        l[i] = 0;
    }
    f[n + 1] = INT_MAX;
    fo(i, 1, n)
        fo(j, i + 1, n) if (a[i] < a[j] && f[i] + 1 > f[j])
    {
        l[j] = i;
        f[j] = f[i] + 1;
    }
    int k = 0, vt, d = 0;
    fo(i, 1, n) if (k < f[i])
    {
        k = f[i];
        vt = i;
    }
    while (f[vt] != 0)
    {
        d++;
        b[d] = a[vt];
        vt = l[vt];
    }
    cout << d << '\n';
    for (int i = d; i >= 1; i--)
        cout << b[i] << ' ';
}
