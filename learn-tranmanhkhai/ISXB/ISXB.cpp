#include<bits/stdc++.h>
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define ll long long
#define nmax 1000005
#define ii pair<ll,ll>
#define fi first
#define se second
const ll mod=1e9+7;
using namespace std;
ll n;
ii a[nmax];
ll  cmp(ii a,ii b)
{
    if(a.fi==b.fi) return a.se>b.se;
    else return a.fi<b.fi;
}
int main()
{
     #ifndef ONLINE_JUDGE
    freopen("ISXB.inp","r",stdin);
    freopen("ISXB.out","w",stdout);
    #endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n;
    fo(i,1,n)
    {
        cin>>a[i].fi;
    }
    fo(i,1,n)
    {
        cin>>a[i].se;
    }
    sort(a+1,a+n+1,cmp);
    fo(i,1,n)
    {
        cout<<a[i].fi<<' '<<a[i].se;
        cout<<'\n';
    }
}
