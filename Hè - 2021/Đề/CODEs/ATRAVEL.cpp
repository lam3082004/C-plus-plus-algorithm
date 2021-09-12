#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int add(int a, int b) {
	if ((a += b) >= MOD) a -= MOD;
	return a;
}

const int maxN = 2e3 + 69;
struct point {
	int x, y;
	bool operator < (const point& oth) const {
		if (x != oth.x) return x > oth.x;
		return y > oth.y;
	}
};
int n;
point a[maxN];
int b[maxN];
vector<int> vals;
int dp[maxN][maxN];
struct FenwickTree {
	int n;
	vector<int> fen;
	FenwickTree(int n) : n(n), fen(n + 6.9) {}
	FenwickTree() {}
	void update(int i, int v) {
		for (i++; i <= n; i += i & -i)
			fen[i] = add(fen[i], v);
	}
	int get(int i) {
		int res = 0;
		for (i++; i; i -= i & -i)
			res = add(res, fen[i]);
		return res;
	}
} fen;
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i].x;
	for (int i = 1; i <= n; i++) cin >> a[i].y;
	sort(a + 1, a + 1 + n);
	for (int i = 1; i <= n; i++) vals.push_back(a[i].y);
	sort(vals.begin(), vals.end());
	vals.resize(unique(vals.begin(), vals.end()) - vals.begin());
	for (int i = 1; i <= n; i++)
		b[i] = lower_bound(vals.begin(), vals.end(), a[i].y) - vals.begin() + 1;

	fen = FenwickTree(vals.size());
	for (int i = 1; i <= n; i++) {
		fill(fen.fen.begin(), fen.fen.end(), 0);
		if (i == 1) fen.update(0, 1);
		int res = 0;
		for (int j = 1; j <= n; j++) {
			dp[i][j] = fen.get(b[j] - 1);
			fen.update(b[j], dp[i - 1][j]);

			res = add(res, dp[i][j]);
		}
		cout << res << ' ';
	}
}
