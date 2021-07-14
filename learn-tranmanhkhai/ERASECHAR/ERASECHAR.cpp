#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
string s;
ll n, q, dem = 0, l, r;
// bool doixung(string k)
// {
//     ll s = 0;
//     fo(i, 0, k.size() / 2 - 1)
//     {
//         if (k[i] == k[k.size() - i - 1])
//             s = 1;
//         else
//             s = 0;
//     }
//     if (s == 1)
//         return true;
//     else
//         return false;
// }
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("ERASECHAR.inp", "r", stdin);
    freopen("ERASECHAR.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> s;
    cin >> q;
    // string z = "";
    // fo(i, 5, 6)
    //     z += s[i];
    // cout << z;
    while (q--)
    {
        cin >> l >> r;
        string k = "", k1 = "";
        fo(i, l - 1, r - 1)
        {
            k += s[i];
        }
        for (int j = r - 1; j >= l - 1; j--)
        {
            k1 += s[j];
        }
        if (k == k1)
        {
            cout << "YES" << '\n';
        }
        else
            cout << "NO" << '\n';
    }
}
