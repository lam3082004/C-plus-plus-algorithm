#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (ll i = a; i <= b; i++)
#define nmax 100005
using namespace std;
ll w[nmax], v[nmax], m;
ll n, f[nmax], ans = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("Bag.inp", "r", stdin);
    freopen("Bag.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    fo(i, 1, n)
    {
        cin >> v[i] >> w[i];
    }
    fo(i, 1, n)
    {
        fo(j, 1, m)
        {
            //f[j]=f[j-1];
            if (j >= w[i])
                f[j] = max(f[j], f[j - w[i]] + v[i]);
        }
    }
    fo(i, 1, m) cout << f[i] << ' ';
    cout << f[m];
}
