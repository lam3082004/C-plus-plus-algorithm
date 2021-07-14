#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax];
ll dem1 = 0, dem2 = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("CHIATAO.inp", "r", stdin);
    freopen("CHIATAO.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    fo(i, 1, n)
    {
        if (a[i] == 100)
            dem1++;
        else if (a[i] == 200)
            dem2++;
    }
    if (dem1 / 2 == dem2)
        cout << "YES";
    else if (n % 2 == 0 && dem1 % 2 == 0 && dem2 % 2 == 0)
        cout << "YES";
    else if (dem1 % 2 == 0 && dem1 != 0)
        cout << "YES";
    else
        cout << "NO";
}
