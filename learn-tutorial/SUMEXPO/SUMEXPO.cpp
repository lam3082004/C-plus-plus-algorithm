#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
const ll mod = 1e9 + 7;
using namespace std;
ll n, s = 0, s1 = 0, s2 = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("sumexpo.inp", "r", stdin);
    freopen("sumexpo.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 2, nmax)
    {
        s = 0;
        while (n % i == 0)
        {
            s++;
            n /= i;
        }
        if (s % 2 == 0)
            s1 += s;
        else
            s2 += s;
    }
    if (n > 1)
        s2++;
    cout << s1 << '\n'
         << s2;
}
