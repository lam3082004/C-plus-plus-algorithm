#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (ll i = a; i <= b; i++)
#define nmax 100005
using namespace std;
ll n, k, ans, z, dem = 0, l, q, t;
int a[nmax], b[nmax], s[nmax], p[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("SAW.inp", "r", stdin);
    freopen("SAW.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> t;
    fo(i, 1, n) cin >> a[i];
    sort(a + 1, a + n + 1, greater<ll>());
    fo(i, 1, n) p[i] = p[i - 1] + a[i];
    //fo(i, 1, n) cout << a[i] << ' ';
    if (t >= a[2] && t <= a[1])
    {
        cout << a[2];
        return 0;
    }
    else
    {
        //fo(i,1,n) cout<<p[i]<<' ';
        fo(i, 1, n)
        {
            if (p[i] == t)
            {
                cout << a[i + 1];
                return 0;
            }
            else if (p[i] > t)
            {
                l = i;
                k = t - p[i - 1];
                break;
            }
        }
        // cout << k << ' ' << l;
        // cout << '\n';
        fo(i, l, n - 1) b[i] = a[i] - a[i + 1];
        //fo(i, l, n) cout << b[i] << ' ';
        //cout << '\n';
        fo(i, l, n - 1)
        {
            if (i == l)
                s[i] = s[i - 1] + b[i];
            else
                s[i] = s[i - 1] + b[i] * (i - l + 1);
        }
        s[n] = s[n - 1] + a[n] * (n - l + 1);
        //fo(i, 1, n) cout << s[i] << ' ';
        //cout << '\n';
        if (s[n] == k)
        {
            cout << 0;
            return 0;
        }
        //fo(i,l,n) cout<<s[i]<<' ';
        fo(i, l, n)
        {
            if (s[i] == k)
            {
                cout << a[n - i + l];
                return 0;
            }
            else if (s[i] > k)
            {
                ans = i - l + 1;
                z = k - s[i - 1];
                break;
            }
        }

        cout << a[ans + l - 1] - z / ans;
    }
}
