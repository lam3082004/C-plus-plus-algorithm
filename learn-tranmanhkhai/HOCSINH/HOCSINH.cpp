#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
#define fi first
#define se second
#define ii pair<ll, ll>
const ll mod = 1e9 + 7;
using namespace std;
struct lam
{
    ll toan, tin;
    string ten;
};

bool hs(lam x, lam y)
{

    if (x.ten == y.ten)
    {
        if ((x.toan + x.tin) == (y.toan + y.tin))
            return x.toan < y.toan;
        else
            return (x.toan + x.tin) < (y.toan + y.tin);
    }
    else
        return x.ten < y.ten;
}
lam a[nmax];
ll n;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("HOCSINH.inp", "r", stdin);
    freopen("HOCSINH.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    fo(i, 1, n) cin >> a[i].ten >> a[i].toan >> a[i].tin;
    sort(a + 1, a + n + 1, hs);
    fo(i, 1, n)
            cout
        << a[i].ten << ' ' << a[i].toan << ' ' << a[i].tin << '\n';
}
