#include<bits/stdc++.h>
#define ll long long
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define nmax 10000005
using namespace std;
ll n,a[nmax],m,f[105];
int main()
{
//        #ifndef ONLINE_JUDGE
//    freopen("l.inp","r",stdin);
//    freopen("l.out","w",stdout);
//        #endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n>>m;
    if (n==m)
        {
            cout<<n;
            return 0;
        }
    else
    {
        ll k=__gcd(n,m);
        n/=k;
        m/=k;
        if (n%2!=0 && m%2!=0) cout<<k;
        else cout<<0;
    }
}
