#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 105
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, z = 0;
bool dem = true;
pair<int, string> s[nmax];
string c[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES19E.inp", "r", stdin);
    freopen("LES19E.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
    {
        cin >> s[i].se;
        s[i].fi = s[i].se.size();
    }
    sort(s + 1, s + n + 1);
    // fo(i, 1, n) cout << s[i].se << " ";
    fo(i, 2, n)
    {
        if (s[i].se.find(s[i - 1].se) == string::npos)
        {
            dem = false;
            break;
        }
        else
            dem = true;
        // cout << dem << "";
    }
    if (dem == true)
    {
        cout << "YES" << '\n';
        fo(i, 1, n) cout << s[i].se << '\n';
    }
    else
        cout << "NO";
}
