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
ll dem = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES21A.inp", "r", stdin);
    freopen("LES21A.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> s;
    ll n = s.size();
    sort(s.begin(), s.end());
    fo(i, 0, n - 2)
    {
        if (s[i] == s[i + 1])
        {
            dem++;
        }
    }
    // cout << n<<' '< dem;
    if (n == 1)
        cout << "YES";
    else if (dem == n - 2)
        cout
            << "YES";
    else
        cout << "NO";
}