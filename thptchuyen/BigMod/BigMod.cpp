#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
string a, b;
ll mod, tmp, kq;
ll nhan(ll a, ll b, ll c)
{
    if (b == 0)
        return 0;
    ll t = nhan(a, b / 2, c);
    t = (t + t) % c;
    if (b % 2 == 1)
        t = (t + a) % c;
    return t;
}
ll mu(ll a, ll b, ll c)
{
    if (b == 0)
        return 1;
    ll t = mu(a, b / 2, c);
    t = nhan(t, t, c) % c;
    if (b % 2 == 1)
        t = nhan(t, a, c) % c;
    return t;
}
int main()
{
    cin >> a >> b >> mod;
    fo(i, 0, a.size() - 1)
        tmp = (tmp * 10 + a[i] - '0') % mod;
    kq = mu(tmp, b[b.size() - 1] - '0', mod);
    for (int i = b.size() - 2; i >= 0; i--)
    {
        tmp = mu(tmp, 10, mod);
        kq = (kq * mu(tmp, b[i] - '0', mod)) % mod;
    }
    cout << kq;
}