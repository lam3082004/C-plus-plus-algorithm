#include <bits/stdc++.h>
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define ll long long
#define nmax 1000005
#define ii pair<ll, ll>
#define fi first
#define se second
const ll mod = 1e9 + 7;
using namespace std;
ll n, k, x[155], maxx = -1e9 + 7;
string s;
void nhap()
{
    cin >> s >> k;
    n = s.size();
    s = ' ' + s;
}
void check()
{
    ll s1 = 0, dem = 0;
    fo(i, 1, n) if (x[i] == 1) dem++;
    if (dem == k)
    {
        fo(i, 1, n)
        {
            if (x[i] == 0)
                s1 = s1 * 10 + (s[i] - '0');
            maxx = max(maxx, s1);
        }
    }
}
void bk(int i)
{
    fo(j, 0, 1)
    {
        x[i] = j;
        if (i == n)
            check();
        else
            bk(i + 1);
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("MAXEZ.inp", "r", stdin);
    freopen("MAXEZ.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    nhap();
    bk(1);
    cout << maxx;
}
