#include <bits/stdc++.h>
#define nmax 500005
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
ll n, a[nmax];
ll s = 0, dem = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("MAXSUM2.inp", "r", stdin);
    freopen("MAXSUM2.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    fo(i, 1, n)
    {
        if (a[i] > 0)
            s += a[i];
    }
    cout << s * 2;
}
