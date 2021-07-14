#include <bits/stdc++.h>
using namespace std;
long long tich(long long a, long long b, long long c)
{
    a %= c;
    b %= c;
    long long q = (long double)a * b / c;
    return (a * b - q * c) % c;
}
long long mu(long long a, long long b, long long c)
{
    if (b == 0)
        return 1;
    long long tmp = mu(a, b / 2, c);
    tmp = tich(tmp, tmp, c);
    if (b & 1)
        tmp = tich(tmp, a, c);
    return tmp;
}
long long log(long long n)
{
    long long t = n - 1;
    long long s = 0;
    while (t % 2 == 0 && t > 0)
        s++, t /= 2;
    return s;
}
bool ok(long long n)
{
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    if (n % 2 == 1 && n > 2)
    {
        long long s = log(n), m = (n - 1) / mu(2, s, n), dem = 0, x;
        if (mu(2, n - 1, n) == 1)
        {
            for (int i = s - 1; i >= 0; i--)
            {
                x = mu(2, mu(2, i, n) * m, n);
                if (x == -1 || x == n - 1)
                    return true;
                if (x == 1)
                    dem++;
            }
            if (dem == s)
                return true;
        }
        return false;
    }
}
long long n, ans = 1;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("main.inp", "r", stdin);
    freopen("main.out", "w", stdout);
    cin >> n;
    ///n=(x1^p1*...xk^pk)
    ///(p1+1)*(p2+1)*...*(pk+1)
    for (long long i = 2; i * i * i <= n; i++)
    {
        long long p = 0;
        while (n % i == 0)
        {
            n /= i;
            p++;
        }
        ans *= (p + 1);
    }
    ///n=1
    if (n == 1)
    {
        cout << ans;
        return 0;
    }
    /// n la so nguyen to
    if (ok(n))
    {
        ///n=(xk^1)
        cout << ans * 2;
        return 0;
    }
    /// n la so chinh phuong
    long long tam = sqrt(n);
    if (tam * tam == n)
    {
        ///n=(xk^2)
        cout << ans * 3;
        return 0;
    }
    /// n=(xq^1) * (xk^1)
    cout << ans * 4;
}
