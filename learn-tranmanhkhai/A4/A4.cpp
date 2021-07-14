#include <bits/stdc++.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define ll long long
#define nmax 1000005
#define ii pair<ll, ll>
#define fi first
#define se second
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax];
ll dem = 0, k;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("A4.inp", "r", stdin);
    freopen("A4.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    fo(i, 1, n - 1)
        fo(j, i + 1, n)
    {
        if (a[i] > 3 * a[j])
            dem++;
    }
    cout << dem;
}
