#include <bits/stdc++.h>
#define ll long long
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define nmax 100005
using namespace std;
int n,k,a[nmax],x,y,dem=0;
int main()
{
//#ifndef ONLINE_JUDGE
//    freopen("l.inp", "r", stdin);
//    freopen("l.out", "w", stdout);
//#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    fo(i,1,n) cin>>a[i];
    fo(i,1,n-1)
    {
        cin>>x>>y;
        if(x==1) dem++;
    }
    if(k!=1)
    {
        cout<<1;
        return 0;
    }
    cout<<dem;
}
