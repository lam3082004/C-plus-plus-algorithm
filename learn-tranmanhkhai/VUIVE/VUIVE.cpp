#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a, b;
ll dem1 = 0, dem2 = 0;
bool tcs(ll x)
{
    ll s = 0;
    while (x > 0)
    {
        s += (x % 10) * (x % 10);
        x /= 10;
    }
    if (s % 2 == 0)
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
    freopen("VUIVE.inp", "r", stdin);
    freopen("VUIVE.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> a >> b;
    fo(i, a, b)
    {
        if (tcs(i) == true)
            dem1++;
    }
    cout << dem1;
}
