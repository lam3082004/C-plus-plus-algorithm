#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<ll, ll>
const ll mod = 1e9 + 7;
using namespace std;
int n, pos[nmax], x[nmax], y[nmax];
string name[nmax], s[nmax];
bool lam(int a, int b)
{
    if (x[a] == x[b])
        return y[a] < y[b];
    return x[a] > x[b];
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("ICPC2.inp", "r", stdin);
    freopen("ICPC2.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        pos[i] = i;
        cin >> name[i] >> s[i] >> x[i] >> y[i];
    }
    sort(pos + 1, pos + 1 + n, lam);
    for (int i = 1; i <= n; ++i)
        cout << name[pos[i]] << ' ' << s[pos[i]] << '\n';
}
