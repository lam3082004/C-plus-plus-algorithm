#include<bits/stdc++.h>
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define ll long long
#define nmax 1000005
#define ii pair<ll,ll>
#define fi first
#define se second
const ll mod=1e9+7;
using namespace std;
ll n,k,a[nmax],dem=0;
int main()
{
     #ifndef ONLINE_JUDGE
    freopen("AMB.inp","r",stdin);
    freopen("AMB.out","w",stdout);
    #endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n>>k;
    fo(i,1,n-1) cin>>a[i];
    ll l=1,r=1e9;
    fo(i,1,n-2)
    {
        fo(j,i+1,n-1)
        {
            ll mid=l+r>>1;
            if((a[i]+a[j])<a[mid])
            {
                dem++;
                l=mid+1;
            }
            else r=mid-1;
        }
    }
    cout<<dem;
}
