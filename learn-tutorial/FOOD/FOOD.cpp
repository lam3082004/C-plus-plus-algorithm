#include <bits/stdc++.h>
#define nmax 100005
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
ll n, x, y, z;
ll s = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("FOOD.inp", "r", stdin);
    freopen("FOOD.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> x >> y >> z;
    cout << (x + y) - (n - z);
}
