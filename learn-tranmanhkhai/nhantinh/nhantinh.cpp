#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("nhantinh.inp", "r", stdin);
    freopen("nhantinh.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    if (n == 1 && a[1] == 0)
    {
        cout << "YES";
        return 0;
    }
    else if (a[1] != 1)
    {
        cout << "NO";
        return 0;
    }
    else
    {
        fo(i, 2, n)
        {
            ll res = 1;
            ll x = i;
            for (int j = 2; j * j <= x; j++)
            {
                while (x % j == 0)
                {
                    x /= j;
                    if (res * a[j] > a[i])
                    {
                        cout << "NO";
                        return 0;
                    }
                    res *= a[j];
                }
            }
            if (x > 1)
                res *= a[x];
            if (a[i] != res)
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}
