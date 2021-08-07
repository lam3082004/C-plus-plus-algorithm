#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[25];
void nhap()
{
    cin >> n;
}
void check()
{
}
ll lietke(ll x)
{
    fo(i, 1, 2)
    {
        a[x] = i;
        if (x == n)
        {
            fo(j, 1, n)
            {
                if (a[j] == a[j + 1] && a[j] == 2)
                    return 1;
            }
            fo(j, 1, n)
            {
                if (a[j] == 1)
                    cout << 'A';
                else
                    cout << 'B';
            }
            cout << '\n';
        }
        else
            lietke(x + 1);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("lietke1.inp", "r", stdin);
    freopen("lietke1.out", "w", stdout);
#endif // ONLINE_JUDGE
    nhap();
    lietke(1);
}