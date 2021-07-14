#include <bits/stdc++.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define ll long long
#define nmax 1000005
#define ii pair<ll, ll>
#define fi first
#define se second
const ll mod = 1e9 + 7;
using namespace std;
ll a, b, c;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("IE8.inp", "r", stdin);
    freopen("IE8.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b >> c;
    if (a == b * c || c == a * b || b == a * c)
        cout << "/";
    else
        cout << "NOSOL";
}