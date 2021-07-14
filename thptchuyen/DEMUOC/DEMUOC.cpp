#include<bits/stdc++.h>
#define ll long long
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define nmax 100005
using namespace std;
ll n,s=0,a[nmax];
int main()
{
            #ifndef ONLINE_JUDGE
    freopen("DEMUOC.inp","r",stdin);
    freopen("DEMUOC.out","w",stdout);
        #endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n;
    fo(i,1,n)
    {
        cin>>a[i];
        s+=a[i];
    }
    cout<<s;
}
