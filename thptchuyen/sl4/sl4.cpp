#include <bits/stdc++.h>
#define nmax 5005
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
int n, dem = 0, a[nmax], k;
void bk(int k)
{
    ll s = 0;
    fo(j, 0, 3)
    {
        a[k] = j;
        if (k % 2 == 0)
        {
            ll z = (a[k] + a[k - 1]) % 4;
            //if(x==3)
            if (0 != (a[k - 2] + a[k - 3]) % 4 && k != 2 || k != 2 && z != 0)
                continue;
        }
        if (k == n)
            dem++;
        else
            bk(k + 1);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    bk(1);
    cout << dem;
}
