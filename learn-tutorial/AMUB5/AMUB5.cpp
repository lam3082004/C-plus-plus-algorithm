#include <bits/stdc++.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define ll long long
#define nmax 1000005
#define ii pair<ll, ll>
#define fi first
#define se second
const ll mod = 1e9 + 7;
using namespace std;
string a, b;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("AMUB5.inp", "r", stdin);
    freopen("AMUB5.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    b = "0" + b;
    ll m = a.size() - 1;
    ll n = b.size() - 1;
    ll s = ((int(b[n - 1]) - 48) * 10 + (int(b[n]) - 48)) % 4;
    if (a[m] == '0')
        cout << 0;
    else if (a[m] == '1')
        cout << 1;
    else if (a[m] == '5')
        cout << 5;
    else if (a[m] == '6')
        cout << 6;
    else
    {
        if (s == 0)
            cout << (a[m] - '0') * (a[m] - '0') * (a[m] - '0') * (a[m] - '0') % 10;
        else if (s == 1)
            cout << (a[m] - '0');
        else if (s == 2)
            cout << (a[m] - '0') * (a[m] - '0') % 10;
        else if (s == 3)
            cout << (a[m] - '0') * (a[m] - '0') * (a[m] - '0') % 10;
    }
}
