#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, s, d, dem = 0;
ii a[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES22C.inp", "r", stdin);
    freopen("LES22C.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> s >> d;
    fo(i, 1, n)
    {
        cin >> a[i].fi >> a[i].se;
    }
    fo(i, 1, n)
    {
        if (a[i].fi < s && a[i].se > d)
        {
            dem++;
        }
    }
    if (dem > 0)
        cout << "Yes";
    else
        cout << "No";
}