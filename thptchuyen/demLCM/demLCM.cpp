//https://drive.google.com/file/d/1XLTFJzeMQsvYGhgpM-E92pAMLR-usKcJ/view
#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 10000005
#define fi first
#define se second
#define ii pair<int, int>
#define mod 1000000007
using namespace std;
// ll f[nmax], t, n, dem = 0;
// bool NT[nmax];
// void sang()
// {
//     memset(NT, true, sizeof(NT));
//     NT[0] = false;
//     NT[1] = false;
//     for (int i = 2; i * i <= nmax; i++)
//     {
//         if (NT[i])
//             for (int j = i * i; j <= nmax; j += i)
//                 NT[j] = false;
//     }
// }
// bool CP(ll x)
// {
//     ll q = sqrt(x);
//     if (q * q == x && NT[q])
//         return true;
//     else
//         return false;
// }
ll n, a[nmax], cnt[nmax], minn = 1e18;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("demLCM.inp", "r", stdin);
    freopen("demLCM.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    fo(i, 1, nmax)
    {
        ll k = i;
        ll s = 1;
        ll dem = 0;
        for (int j = i; j <= nmax; j += i)
        {
            if (cnt[j] > 0)
            {
                s *= j;
                dem++;
            }
            if (dem == 2)
            {
                ll tmp = s / k;
                minn = min(minn, tmp);
                break;
            }
        }
    }
    cout << minn;
}