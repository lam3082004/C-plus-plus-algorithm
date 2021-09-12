#include <bits/stdc++.h>
using   namespace   std;
int main(){
    int n,cnt[15];
    memset(cnt,0,sizeof(cnt));
    cin >> n;
    long long ans = 0;
    for(int i = 1; i <= n; ++i){
        int x;
        cin >> x;
        ans += cnt[x * x % 11];
        cnt[x * x % 11]++;
    }
    cout << ans << '\n';
}
