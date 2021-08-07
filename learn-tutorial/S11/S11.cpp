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
ll k;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("S11.inp", "r", stdin);
    freopen("S11.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> k >> s;
    for (int i = 0; i <= s.size() - 1; i++)
    {
        s[i] = s[i] - k;
        if (s[i] < 97)
            s[i] = s[i] + 26;
    }
    cout << s;
}
