#include <iostream>
#include <algorithm>
#define NMAX 79
using namespace std;

int n, m, base;
int f[NMAX][NMAX][NMAX][NMAX];
int a[NMAX][NMAX];
int F[NMAX][NMAX];

void QHD1() {
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			for (int sl = 0; sl <= (m) / 2; sl++) {
				for (int bs = 0; bs < base; bs++) {
					f[i][j][sl][bs] = -1;
				}
			}
		}
	}
	int ans;
	for (int i = 1; i <= n; i++) {
		f[i][0][0][0] = 0;
		for (int j = 1; j <= m; j++) {
			for (int sl = 0; sl <= (m) / 2; sl++) {
				for (int bs = 0; bs < base; bs++) {
					if (f[i][j - 1][sl][bs] != -1) {
						f[i][j][sl][bs] = max(f[i][j][sl][bs], f[i][j - 1][sl][bs]);
						ans = f[i][j - 1][sl][bs] + a[i][j];
						f[i][j][sl + 1][(bs + a[i][j]) % base] = max(f[i][j][sl + 1][(bs + a[i][j]) % base], ans);
					}
				}
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < base ; j++) {
			a[i][j] = 0;
			for (int sl = 0; sl <= (m) / 2; sl++) {
				a[i][j] = max(a[i][j], f[i][m][sl][j]);
			}
		}
	}
}

void QHD2() {
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < base; j++) {
			F[i][j] = max(F[i][j], a[i][j]);
			F[i][j] = max(F[i][j], F[i - 1][j]);
			for (int bs = 0; bs < base; bs++) {
				if (F[i - 1][bs] <= 0 || a[i][j] == 0) continue;
				F[i][(j + bs) % base] = max(F[i][(j + bs) % base], F[i - 1][bs] + a[i][j]);
			}
		}
	}

	cout << F[n][0] << endl;
}
int main() {
	cin >> n >> m >> base;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	QHD1();
	QHD2();
}
