#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 500005
using namespace std;
ll n, k, a[nmax], st[4 * nmax], l, r, t;
void update(ll id, ll l, ll r, ll p, ll v)
{
    if (p < l || r < p)
    {
        return;
    }
    if (l == r)
    {
        st[id] = v;
        return;
    }
    ll mid = (l + r) / 2;
    update(id * 2, l, mid, p, v);
    update(id * 2 + 1, mid + 1, r, p, v);
    st[id] = max(st[2 * id], st[2 * id + 1]);
}
int get(ll id, ll l, ll r, ll u, ll v)
{
    if (v < l || r < u)
    {
        return -1e18;
    }
    if (u <= l && r <= v)
    {
        return st[id];
    }
    ll mid = l + r >> 1;
    return max(get(id * 2, l, mid, u, v), get(id * 2 + 1, mid + 1, r, u, v));
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("segmenttree.inp", "r", stdin);
    freopen("segmenttree.out", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> t;
    fo(i, 1, n)
    {
        cin >> a[i];
        update(1, 1, n, i, a[i]);
    }
    while (t--)
    {
        cin >> l >> r;
        cout << get(1, 1, n, l, r) << '\n';
    }
}
