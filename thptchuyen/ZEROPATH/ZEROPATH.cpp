#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
using namespace std;
int n, d[nmax + 5], a[nmax + 5], k = 0, t = 0;
void uoc(int x)
{
    fo(i, 1, int(sqrt(x))) if (x % i == 0)
    {
        int z = (i - 1) * (x / i + 1);
        if (z != 0 && d[z] == 0)
        {
            uoc(z);
            d[z] = 1;
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("ZEROPATH.inp", "r", stdin);
    freopen("ZEROPATH.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    d[0] = 1;
    uoc(n);
    // for (int i = 1; i <= 20; i++)
    //     cout << d[i] << ' ';
    // cout << endl;
    fo(i, 0, nmax) if (d[i] == 1)
    {
        a[++k] = i;
    }
    cout << k << "\n";
    fo(i, 1, k)
            cout
        << a[i] << " ";
}
