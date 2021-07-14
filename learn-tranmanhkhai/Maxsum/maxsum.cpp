#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax], s[nmax];
ll dem1 = 0, dem2 = 0, maxx = -1e12;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("maxsum.inp", "r", stdin);
    freopen("maxsum.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
    {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    fo(i, 1, n - 1)
    {
        fo(j, i + 1, n)
        {
            maxx = max(maxx, s[j] - s[i]);
        }
    }
    cout << maxx;
}
