#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 200005
using namespace std;
ll n, m, z = 0;
ll a[nmax];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("loop8.inp", "r", stdin);
    freopen("loop8.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    fo(i, 1, n)
    {
        if (sqrt(a[i]) * sqrt(a[i]) == a[i] && a[i] % 2 == 1)
        {
            z++;
        }
    }
    cout << z;
}
