#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll a[7], minn = 101, dem = 0, b[7];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES20B.inp", "r", stdin);
    freopen("LES20B.out", "w", stdout);
#endif // ONLINE_JUDGE
    fo(i, 1, 5)
    {
        cin >> a[i];
        minn = min(minn, a[i]);
    }
    sort(a + 1, a + 5 + 1);
    fo(i, 2, 5)
    {
        if (a[1] == a[i])
            dem++;
    }
    if (dem == 0)
        cout << a[1];
    else if (dem == 1)
        cout << a[3];
    else if (dem == 2)
        cout << a[4];
    else if (dem == 3)
        cout << a[5];
    // else if (dem == 4)
    //     cout << a[4];
    // else if (dem == 5)
    //     cout << a[5];
    else
        cout << "UNIDENTIFIED";
}
