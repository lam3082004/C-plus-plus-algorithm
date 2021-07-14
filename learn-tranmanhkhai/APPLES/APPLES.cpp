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
    freopen("APPLES.inp", "r", stdin);
    freopen("APPLES.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> m >> n;
    fo(i, 1, m)
            fo(j, 1, n) cin >>
        a[i][j];
    fo(i, 1, m)
        fo(j, 1, n)
    {
        if (a[i][j] == "a" && a[i][j - 1] == ".")
        {
            a[i - 1][j] = "a";
            a[i][j] = ".";
        }
    }
    fo(i, 1, m)
        fo(j, 1, n)
    {
        cout << a[i][j] << ' ';
        cout << endl;
    }
}
