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
ll f[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("BIMAT.inp", "r", stdin);
    freopen("BIMAT.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> s;
    ll k = s.size();
    ll n = 0;
    for (int i = sqrt(k); i >= 1; i--)
    {
        if (k % i == 0)
        {
            n = i;
            break;
        }
    }
    ll m = k / n;
    if (n == 1)
        cout << s;
    else
    {
        ll z = 0;
        string t = "";
        fo(i, 0, k - 1)
        {
            z = 0;
            while (z <= k - 1)
            {
                t += s[i + z];
                z += n;
            }
            if (t.size() == k)
                break;
        }
        cout << t;
    }
}
