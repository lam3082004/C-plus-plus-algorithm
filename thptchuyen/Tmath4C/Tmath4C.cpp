//https://drive.google.com/file/d/1XLTFJzeMQsvYGhgpM-E92pAMLR-usKcJ/view
#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 10000005
#define fi first
#define se second
#define ii pair<int, int>
#define mod 1000000007
using namespace std;
ll f[nmax], t, n, dem = 0;
bool NT[nmax];
void sang()
{
    memset(NT, true, sizeof(NT));
    NT[0] = false;
    NT[1] = false;
    for (int i = 2; i * i <= nmax; i++)
    {
        if (NT[i])
            for (int j = i * i; j <= nmax; j += i)
                NT[j] = false;
    }
}
bool CP(ll x)
{
    ll q = sqrt(x);
    if (q * q == x && NT[q])
        return true;
    else
        return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("Tmath4C.inp", "r", stdin);
    freopen("Tmath4C.out", "w", stdout);
#endif // ONLINE_JUDGE
    sang();
    f[1] = 0;
    fo(i, 2, nmax)
    {
        ll k = sqrt(i);
        if (NT[i] == false && CP(i) == false)
            f[i] = f[i - 1] + 1;
        else if (NT[i])
            f[i] = f[i - 1];
        else if (CP(i))
            f[i] = f[i - 1] + 2;
    }
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << n - f[n] << '\n';
    }
}
