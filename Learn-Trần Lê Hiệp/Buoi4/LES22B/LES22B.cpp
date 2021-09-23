#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll a, b;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES22B.inp", "r", stdin);
    freopen("LES22B.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> a;
    if (a % 1000 == 0)
        cout << 0;
    else
        cout << 1000 - a % 1000;
}