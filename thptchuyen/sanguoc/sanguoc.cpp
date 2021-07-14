#include <bits/stdc++.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define ll long long
#define nmax 10000005
const ll mod = 1e9 + 7;
using namespace std;
ll f[nmax], t, n;
void uoc()
{
    fo(i, 1, nmax)
    {
        for (int j = i; j <= nmax; j += i)
            f[j]++;
    }
}
int main()
{
    uoc();
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("sanguoc.inp", "r", stdin);
    freopen("sanguoc.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << f[n] << '\n';
    }
}
