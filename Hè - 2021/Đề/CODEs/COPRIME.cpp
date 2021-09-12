#include <bits/stdc++.h>
using namespace std;
const int MX = 1e6 + 6;

int n, q;
long long cnt[MX], ans = 0;

int main() {
  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  cin >> q;
  while (q--) {
    int t, x;
    cin >> t >> x;

    vector<int> prime;
    for (int i = 2; i * i <= x; ++i) {
      if (x % i == 0) {
        prime.emplace_back(i);
        while (x % i == 0) x /= i;
      }
    }
    if (x > 1) prime.emplace_back(x);

    int m = prime.size();
    for (int mk = 0; mk < (1 << m); ++mk) {
      int k = 1;
      for (int i = 0; i < m; ++i) {
        if ((mk >> i) & 1) k *= prime[i];
      }

      if (t == 1) {
        if (__builtin_popcount(mk) & 1) ans -= cnt[k];
        else ans += cnt[k];
        ++cnt[k];
      } else {
        --cnt[k];
        if (__builtin_popcount(mk) & 1) ans += cnt[k];
        else ans -= cnt[k];
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
