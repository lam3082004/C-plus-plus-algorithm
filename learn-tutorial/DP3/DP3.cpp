#include<bits/stdc++.h>
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define ll long long
#define nmax 10000005
#define ii pair<ll,ll>
#define fi first
#define se second
const ll mod=1e9+7;
using namespace std;
ii a[nmax];
ll n,k;
ll res;
bool cmp(ii a,ii b)
{
	return a.fi*b.se<a.se*b.fi;
}
int main()
{
     #ifndef ONLINE_JUDGE
    freopen("DP3.inp","r",stdin);
    freopen("DP3.out","w",stdout);
    #endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n>>k;
    fo(i,1,n) cin>>a[i].fi;
    fo(i,1,n) cin>>a[i].se;
    sort(a+1,a+n+1,cmp);
    cout<<a[k].fi/__gcd(a[k].fi,a[k].se)<<' '<<a[k].se/__gcd(a[k].fi,a[k].se);
}
