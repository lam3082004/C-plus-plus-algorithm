#include <bits/stdc++.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define ll long long
#define nmax 10000005
#define ii pair<ll, ll>
#define fi first
#define se second
const ll mod = 1e9 + 7;
using namespace std;
ll a, n, dem = 0;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("sh11.inp", "r", stdin);
    freopen("sh11.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    while (n > 0)
    {
        n /= 5;
        dem += n;
    }
    cout << dem;
}