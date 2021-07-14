#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll CP(ll n)
{
    return sqrt(n) == (int)sqrt(n);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("discord.inp", "r", stdin);
    freopen("discord.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll x;
    cin >> x;
    ll k = x, z = x;
    ll s1, s2;
    while (x--)
    {
        if (CP(x))
        {
            s1 = x;
            break;
        }
    }
    while (k++)
    {
        if (CP(k))
        {
            s2 = k;
            break;
        }
    }
    ll p = min(abs(z - s1), abs(z - s2));
    if (abs(s1 - z) == p)
        cout << s1;
    else
        cout << s2;
}