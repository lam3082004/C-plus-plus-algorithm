#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 500005
using namespace std;
ll a[nmax], st[4 * nmax];
ll n, k, l, r, t, z;
void build(ll id, ll i, ll j)
{
    if (i == j)
    {
        st[id] = a[i];
        return;
    }
    ll mid = i + j >> 1;
    build(2 * id, i, mid);
    build(2 * id + 1, mid + 1, j);
    st[id] = st[2 * id] + st[2 * id + 1];
}
void update(ll id, ll l, ll r, ll u, ll v)
{
    if (r < u || u < l)
    {
        return;
    }
    if (l == r)
    {
        st[id] = v;
        return;
    }
    ll mid = l + r >> 1;
    update(2 * id, l, mid, u, v);
    update(2 * id + 1, mid + 1, r, u, v);
    st[id] = st[2 * id] + st[2 * id + 1];
}
ll get(ll id, ll l, ll r, ll u, ll v)
{
    if (r < u || v < l)
    {
        return 0;
    }
    if (r <= v && u <= l)
    {
        return st[id];
    }
    ll mid = l + r >> 1;

    return get(2 * id, l, mid, u, v) + get(2 * id + 1, mid + 1, r, u, v);
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
    cin >> n >> k;
    fo(i, 1, n)
    {
        cin >> a[i];
    }
    build(1, 1, n);
    while (k--)
    {
        cin >> t >> l >> r;
        ll p = l;
        if (t == 0)
        {
            cin >> z;
            fo(i, l, r)
            {
                update(1, 1, n, i, a[i] + z);
            }
        }
        else
            cout << get(1, 1, n, l, r) << '\n';
    }
}
