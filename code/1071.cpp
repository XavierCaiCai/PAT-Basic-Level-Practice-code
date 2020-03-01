#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T, k;
	cin >> T >> k;
	for (int i = 0; i < k; ++i) {
		int n1, t, n2;
		bool b;
		cin >> n1 >> b >> t >> n2;
		if (t > T) {
			cout << "Not enough tokens.  Total = " << T << ".\n";
			continue;
		}
		if ((n1 > n2) ^ b) {
			T += t;
			cout << "Win " << t << "!  Total = " << T << ".\n";
		}
		else {
			T -= t;
			cout << "Lose " << t << ".  Total = " << T << ".\n";
		}
		if (T == 0) {
			cout << "Game Over.\n";
			break;
		}
	}
	return 0;
} 	
