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
    freopen("S10.inp", "r", stdin);
    freopen("S10.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> k >> s;
    for (int i = k - 1; i >= 0; i--)
        cout << s[i];
    for (int i = s.size() - 1; i >= k; i--)
        cout << s[i];
}
