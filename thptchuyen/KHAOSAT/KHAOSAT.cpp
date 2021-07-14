#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
using namespace std;
ll n;
int minn = 1e9 + 9, k = 0, l = 0;
string s, a[nmax];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("KHAOSAT.inp", "r", stdin);
    freopen("KHAOSAT.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
    {
        cin >> s;
        minn = 1e9 + 9;
        fo(j, 0, s.size() - 1)
        {
            if (s[j] < 48 || s[j] > 57)
            {
                cout << s[j];
            }
            else if (s[j] >= 48 && s[j] <= 57)
            {
                minn = min(minn, s[j] - 48);
            }
        }
        cout << minn;
        k += minn;
        cout << '\n';
    }
    cout << k;
}
