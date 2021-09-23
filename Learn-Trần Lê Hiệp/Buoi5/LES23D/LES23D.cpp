#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
long long t, n, s;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES23D.inp", "r", stdin);
    freopen("LES23D.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 3 == 0)
        {
            cout << n / 3 << ' ' << n / 3 << ' ' << n / 3;
        }
        else if (n % 2 == 1)
        {
            cout << 1 << ' ' << (n - 1) / 2 << ' ' << (n - 1) / 2;
        }
        else if (n % 4 == 0)
        {
            cout << n / 2 << ' ' << n / 4 << ' ' << n / 4;
        }
        else
        {
            cout << (n - 2) / 2 << ' ' << (n - 2) / 2 << ' ' << 2;
        }
        cout << '\n';
    }
}