#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll Mod = 1e9 + 7;
const int Sz = 1e5 + 5;

ll f[Sz][4];

signed main(){

	int n;
	cin >> n;
	
	f[1][0] = 1;
	f[1][1] = 1;
	f[1][2] = 1;

	for(int i = 2; i <= n; i++){
		for(int c = 0; c <= 2; c++){
			f[i][c] += f[i - 1][0];
			if(c != 1) f[i][c] += f[i - 1][1];
			f[i][c] += f[i - 1][2];
			f[i][c] %= Mod;
		}
	}
	cout << (f[n][0] + f[n][1] + f[n][2]) % Mod << endl;
	return 0;
}