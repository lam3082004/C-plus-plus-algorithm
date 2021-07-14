#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll a, b, c, d;
//ll x;
//ll CP(ll n)
//{
//    return sqrt(n)==(int)sqrt(n);
//}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> a >> b >> c >> d;
    if (a == b == c == d || a < b && b == c == d || a < b && b == c && c < d)
        cout << "1";
    else if (a < c && c < b && c < b && b < d)
        cout << b - c + 1;
    else if (a < c && c < b && c < d && d < b)
        cout << d - c + 1;
    else if (c < a && a < b && a < b && b < d)
        cout << b - a + 1;
    else if (a < b && c < d && a == c && b == d)
        cout << d - c + 1;
    else
        cout << "0";
}
