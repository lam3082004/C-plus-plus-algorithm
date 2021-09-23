#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll a, b, c, dem = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES22A.inp", "r", stdin);
    freopen("LES22A.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> a >> b >> c;
    if (c == 0)
    {
        if (a > b)
            cout << "Takahashi";
        else
            cout << "Aoki";
    }
    else
    {
        if (b > a)
            cout << "Aoki";
        else
            cout << "Takahashi";
    }
}