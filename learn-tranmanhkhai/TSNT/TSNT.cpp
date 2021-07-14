#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll x, s = 0, dem = 0, n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("TSNT.inp", "r", stdin);
    freopen("TSNT.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    if (n <= 1)
    {
        cout << "0";
        return 0;
    }
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
            }
            s++;
        }
    }
    if (n > 1)
        s++;
    cout << s;
}