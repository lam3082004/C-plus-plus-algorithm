#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
string a, b;
ll s1 = 0, s2 = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES20A.inp", "r", stdin);
    freopen("LES20A.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> a >> b;
    fo(i, 0, a.size() - 1) s1 += a[i] - 48;
    fo(i, 0, b.size() - 1) s2 += b[i] - 48;
    cout << max(s1, s2);
}
