#include <bits/stdc++.h>
#define lo long long
#define KKH "ACM"
#define base 66
#define fi first
#define se second
#define BIT(x,k) ((x>>k)&1)
#define reset(x,a) memset(x,a,sizeof x)
using namespace std;
void START()
{
    #ifndef ONLINE_JUDGE
    freopen(KKH".inp","r",stdin);
    freopen(KKH".out","w",stdout);
    #endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int n,m,a[1006][1006];
void tinh(int x,int szn,int szm)
{
    if (x>szn && x>szm) return;
    for (int i=x;i<=szm;i++)
        cout<<a[x][i]<<' ';
	for (int j=x+1;j<=szn;j++)
		cout<<a[j][szm]<<' ';
	for (int k=szm-1;k>=x;k--)
		cout<<a[szn][k]<<' ';
	for (int l=szn-1;l>=x+1;l--)
		cout<<a[l][x]<<' ';
	tinh(x+1,szn-1,szm-1);
}
int main()
{
    START();
    cin>>n>>m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin>>a[i][j];
    tinh(1,n,m);
}
