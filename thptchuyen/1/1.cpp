#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
long long a, b, c, d, e, k, f;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> b >> c >> d >> k;
    a = 1;
    f = c * d / __gcd(c, d);
    e = f * k / (__gcd(__gcd(c, d), k));
    cout << (b / c - (a - 1) / c + b / d - (a - 1) / d) - (b / e - (a - 1) / e);
}
