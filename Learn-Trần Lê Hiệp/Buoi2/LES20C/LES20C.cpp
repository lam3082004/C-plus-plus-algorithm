#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1005
#define fi first
#define se second
#define ii pair<ll, ll>
const ll mod = 1e9 + 7;
using namespace std;
ll n, dem = 0;
long double t = 0;
ii a[nmax];
bool check(ll xA, ll yA, ll xB, ll yB)
{
    if (xB < xA)
    {
        swap(xA, xB);
        swap(yA, yB);
    }
    return (yB - yA >= xA - xB && yB - yA <= xB - xA);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES20C.inp", "r", stdin);
    freopen("LES20C.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
    {
        cin >> a[i].fi >> a[i].se;
    }
    fo(i, 1, n - 1)
    {
        fo(j, i + 1, n)
        {
            if (check(a[i].fi, a[i].se, a[j].fi, a[j].se))
                dem++;
        }
    }
    cout << dem;
}
