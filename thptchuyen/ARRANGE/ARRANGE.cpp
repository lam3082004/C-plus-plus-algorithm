#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
const ll mod = 1e9 + 7;
using namespace std;
ll n, a[nmax], dem = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("ARRANGE.inp", "r", stdin);
    freopen("ARRANGE.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n) cin >> a[i];
    sort(a + 1, a + n + 1, greater<ll>());
    fo(i, 1, n)
    {
        if (a[i] == 1)
            dem++;
    }
    if (dem != 0)
    {
        fo(i, 1, dem)
        {
            cout << "1" << ' ';
        }
    }
    fo(i, 1, n) if (a[i] == 3 && a[i + 1] == 2)
        swap(a[i], a[i + 1]);
    fo(i, 1, n - dem)
            cout
        << a[i] << ' ';
}
