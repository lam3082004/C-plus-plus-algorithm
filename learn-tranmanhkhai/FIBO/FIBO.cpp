#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, f[nmax], dem = 0, t = 80;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("FIBO.inp", "r", stdin);
    freopen("FIBO.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    f[1] = 1;
    f[2] = 1;
    fo(i, 3, 80) f[i] = f[i - 1] + f[i - 2];
    while (n > 0)
    {
        if (n >= f[t])
        {
            n -= f[t];
            dem++;
        }
        t--;
    }
    cout << dem;
}
