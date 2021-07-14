#include <bits/stdc++.h>
#define lo long long
#define KKH "TEST"
#define fi first
#define se second
#define BIT(x, k) ((x >> k) & 1)
using namespace std;
void START()
{
#ifdef toilagun2004
    freopen(KKH ".inp", "r", stdin);
    freopen(KKH ".out", "w", stdout);
#endif // toilagun2004
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
const int gh = 1e6 + 6;
int n, k, a[gh], l[gh], r[gh];
lo kq;
int main()
{
    START();
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        l[i] = i - 1;
        while (l[i] > 0 && a[l[i]] < a[i])
            l[i] = l[l[i]];
    }
    for (int i = n; i > 0; i--)
    {
        r[i] = i + 1;
        while (r[i] <= n && a[r[i]] <= a[i])
            r[i] = r[r[i]];
    }
    for (int i = 1; i <= n; i++)
        if (a[i] == k)
            kq += 1LL * (r[i] - i) * (i - l[i]);
    cout << kq;
}