#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;
const int N = 3001;

int n, T;
ii a[N];

int f[N][N];
bool g[N][N];

int dp(int pos, int cur_t) {
	if (pos > n || cur_t >= T)
		return 0;
	if (g[pos][cur_t])
		return f[pos][cur_t];

	int val = dp(pos + 1, cur_t);
	val = max(val, dp(pos + 1, cur_t + a[pos].first) + a[pos].second);

	g[pos][cur_t] = true;
	return f[pos][cur_t] = val;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> T;
	for (int i = 1; i <= n; i++)    
		cin >> a[i].first >> a[i].second;
	sort (a + 1, a + 1 + n);	
	cout << dp (1, 0);
}