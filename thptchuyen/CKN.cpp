ll C(ll k, ll n)
{
    fo(i, 1, 100000)
        f[i] = 0;
    fo(i, n - k + 1, n)
    {
        ll x = i;
        while (x > 1)
        {
            f[g[x]]++;
            x /= g[x];
        }
    }
    fo(i, 1, k)
    {
        ll x = i;
        while (x > 1)
        {
            f[g[x]]--;
            x /= g[x];
        }
    }
    ll res = 1;
    fo(i, 1, 100000) if (f[i] > 0)
        res = (res * mu(i, f[i])) % mod;
    return res;
}