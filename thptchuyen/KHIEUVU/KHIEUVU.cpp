#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 500005
using namespace std;
ll n, a, k, c[2005], d[2005], ans = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("KHIEUVU.inp", "r", stdin);
    freopen("KHIEUVU.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    fo(i, 1, n)
    {
        cin >> a;
        if (a > 0)
            c[a]++;
        else
            d[-a]++;
    }
    fo(i, 1500, 2000)
        fo(j, 0, k)
            ans += c[i] * d[i + j];
    cout << ans;
}
