#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
using namespace std;
ll n, a;
bool can(ll a)
{
    if (int(sqrt(a)) == sqrt(a))
        return true;
    else
        return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("RGC.inp", "r", stdin);
    freopen("RGC.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    while (n--)
    {
        ll g = 0, h = 0, t = 0, z = 0, dem = 0;
        cin >> a;
        if (can(a) == true)
        {
            cout << sqrt(a) << ' ' << 1;
        }
        else
        {
            fo(i, 2, int(sqrt(a)))
            {
                if (a % i == 0)
                {
                    if (can(a / i))
                    {
                        g = sqrt(a / i);
                        h = i;
                        dem = 1;
                        break;
                    }
                    else if (can(i))
                    {
                        t = sqrt(i);
                        z = a / i;
                    }
                }
            }
            if (dem == 1)
            {
                if (h == 0 && g == 0)
                    cout << 1 << ' ' << a;
                else
                    cout << g << ' ' << h;
            }
            else
            {
                if (t == 0 && z == 0)
                    cout << 1 << ' ' << a;
                else
                    cout << t << ' ' << z;
            }
        }
        cout << '\n';
    }
}
