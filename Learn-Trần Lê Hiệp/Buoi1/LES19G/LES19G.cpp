#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (long long i = a; i <= b; i++)
#define nmax 200005
#define fi first
#define se second
#define ii pair<int, int>
const ll mod = 1e9 + 7;
using namespace std;
int k, n, a[nmax];
vector<int> ans;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("LES19G.inp", "r", stdin);
    freopen("LES19G.out", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    fo(i, 1, n)
            cin >>
        a[i];
    sort(a + 1, a + 1 + n);
    a[n + 1] = -2e9;
    a[0] = 2e9;
    fo(i, 1, n)
    {
        if (ans.empty())
            ans.push_back(a[i]);
        fo(k, 0, 30)
        {
            int valx = a[i] - (1 << k);
            int valy = a[i] + (1 << k);
            int l = lower_bound(a + 1, a + i + 1, valx) - a;
            int r = lower_bound(a + i + 1, a + n + 1, valy) - a;
            if (a[l] == valx && a[r] == valy && ans.size() < 3)
            {
                ans = {a[l], a[i], a[r]};
                continue;
            }
            if (a[l] == valx && ans.size() < 2)
            {
                ans = {a[l], a[i]};
                continue;
            }
            if (a[r] == valy && ans.size() < 2)
            {
                ans = {a[i], a[r]};
                continue;
            }
        }
    }
}
