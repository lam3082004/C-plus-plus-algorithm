#include <bits/stdc++.h>
#define lo long long
#define fi first
#define se second
#define BIT(x, k) ((x >> k) & 1)
using namespace std;
void START()
{
#ifdef toilagun2004
    freopen("l.inp", "r", stdin);
    freopen("l.out", "w", stdout);
#endif // toilagun2004
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int n, k, a[100006];
int q;
void make()
{
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    while (q--)
    {
        cin >> k;
        if (k <= a[1])
        {
            cout << n << '\n';
            continue;
        }
        if (k > a[n] + n - 1)
        {
            cout << 0 << '\n';
            continue;
        }
        int dau = 1, cuoi = n, dem = n, id;
        while (dau <= cuoi)
        {
            int giua = (dau + cuoi) >> 1;
            if (a[giua] < k)
            {
                id = giua;
                dem = giua - 1;
                dau = giua + 1;
            }
            else
                cuoi = giua - 1;
        }
        int kq = n - id;
        for (int i = id; i > 0; --i)
            if (a[i] + dem < k)
                break;
            else
                dem -= k - a[i] + 1, kq++;
        cout << kq << '\n';
    }
}
int main()
{
    START();
    int T;
    cin >> T;
    while (T--)
        make();
}
