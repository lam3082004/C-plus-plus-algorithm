#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll a, b, c, t, d, e, s1 = 0, s2 = 0, s3 = 0, s = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES22D.inp", "r", stdin);
    freopen("LES22D.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d >> e;
        s = a + b + c;
        s1 = a + b;
        s2 = b + c;
        s3 = a + c;
        if (s1 <= d && s - s1 <= e || s2 <= d && s - s2 <= e || s3 <= d && s - s3 <= e)
            cout << "YES";
        else
            cout << "NO";
        cout << '\n';
    }
}