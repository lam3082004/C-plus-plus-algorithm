#include <bits/stdc++.h>
#define nmax 100005
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
ll n, x[25];
bool b[nmax];
void check()
{
    fo(i, 1, n)
            cout
        << x[i] << ' ';
    cout << '\n';
}
void Try(int k)
{
    for (int j = 1; j <= n; j++)
        if (b[j] == 0)
        {
            x[k] = j;
            b[j] = 1;
            if (k == n)
                check();
            else
                Try(k + 1);
            b[j] = 0;
        }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    Try(1);
    return 0;
}
