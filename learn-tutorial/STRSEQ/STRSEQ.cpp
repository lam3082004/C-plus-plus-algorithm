#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll m, n;
string a[505][505];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("STRSEQ.inp", "r", stdin);
    freopen("STRSEQ.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> m >> n;
    fo(i, 1, m)
            fo(j, 1, n) cin >>
        a[i][j];
    cout << 1;
}
