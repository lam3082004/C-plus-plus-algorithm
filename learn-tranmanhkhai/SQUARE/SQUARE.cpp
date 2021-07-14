#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 1000005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
ll h[4], v[4];
ll s = 0, p = 0, k;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("SQUARE.inp", "r", stdin);
    freopen("SQUARE.out", "w", stdout);
#endif // ONLINE_JUDGE
    fo(i, 1, 3)
    {
        cin >> h[i] >> v[i];
    }
    //cout << v[3] << ' ' << v[1];
    fo(i, 1, 3)
    {
        if (h[i] <= 0 || v[i] <= 0)
        {
            cout << "NO";
            return 0;
        }
        else
        {
            s += h[i];
            p += v[i];
            k = max(k, h[i]);
        }
    }
    // s += h[1] + h[2] + h[3];
    // cout << h[1] << ' ' << h[2] << ' ' << h[3] << ' ';
    //cout << s << ' ' << p << ' ';
    if (h[1] == h[2] && h[2] == h[3] && h[1] == p)
    {
        cout << "YES";
        return 0;
    }
    else
    {
        fo(i, 1, 3)
        {
            if (k == h[i])
            {
                fo(j, 1, 3)
                {
                    if (i != j)
                    {
                        if (h[i] - v[i] == v[j])
                        {

                            fo(z, 1, 3)
                            {
                                if (z != i && z != j)
                                {
                                    if (v[j] == v[z] || v[j] == h[z])
                                    {
                                        cout << "YES";
                                        return 0;
                                    }
                                }
                            }
                        }
                        else if (h[i] - v[i] == h[j])
                        {
                            fo(z, 1, 3)
                            {
                                if (z != i && z != j)
                                {
                                    if (h[j] == v[z] || h[j] == h[z])
                                    {
                                        cout << "YES";
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << "NO";
}
