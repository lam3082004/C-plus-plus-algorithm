#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 10005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, k, dem = 0;
ll a[nmax], b[nmax], c[nmax], d[nmax], z = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES19D.inp", "r", stdin);
    freopen("LES19D.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> k;
    fo(i, 1, n)
    {
        cin >> a[i];
        c[i] = a[i];
    }
    sort(c + 1, c + n + 1);
    fo(i, 1, n)
    {
        if (c[i] != c[i + 1])
            dem++;
    }
    // cout << dem << '\n';
    if (dem < k)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << '\n';
        d[++z] = 1;
        // fo(i, 1, n) cout << a[i] << ' ';
        int t = 2;
        while (t <= n)
        {
            int dem = 0;
            fo(j, 1, t - 1)
            {
                if (a[t] == a[j])
                {
                    dem++;
                }
            }
            if (dem == 0)
            {
                d[++z] = t;
            }
            t++;
            // cout << dem << ' ';
        }
        fo(i, 1, k) cout << d[i] << ' ';
    }
}