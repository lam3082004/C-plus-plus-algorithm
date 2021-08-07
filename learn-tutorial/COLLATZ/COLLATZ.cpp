#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll n, a, b, c;
string a[505][505];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("COLLATZ.inp", "r", stdin);
    freopen("COLLATZ.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    a = (n + 1) / 2;
    b = (n + 1) / 2;
    c = (n + 2) / 6;
    cout << a + b - c;
}