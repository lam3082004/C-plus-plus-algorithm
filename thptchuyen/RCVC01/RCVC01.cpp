#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
using namespace std;
string s;
int dem = 0, n, d[50];
void check()
{
    ll so = 0, test = s[1] - 48;
    for (int i = 2; i <= n; i++)
    {
        if (d[i] == 1)
        {
            if (so >= test)
                return;
            else
            {
                so = test;
                test = s[i] - 48;
                if (test == 0)
                    return;
            }
        }
        else
            test = test * 10 + (s[i] - 48);
    }
    if (so >= test)
        return;
    dem++;
}
void Try(int x)
{
    for (int i = 0; i <= 1; i++)
    {
        d[x] = i;
        if (x == n)
            check();
        else
            Try(x + 1);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("RCVC01.inp", "r", stdin);
    freopen("RCVC01.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> s;
    n = s.size();
    s = ' ' + s;
    Try(1);
    cout << dem / 2;
}
