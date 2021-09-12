#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
// #define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES19A.inp", "r", stdin);
    freopen("LES19A.out", "w", stdout);
#endif // ONLINE_JUDGE
    while (cin >> n)
    {
        if (n >= 30)
            cout << "Yes";
        else
            cout << "No";
        cout << '\n';
    }
}
