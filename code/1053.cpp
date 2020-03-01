#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, D;
	double e;
	cin >> n >> e >> D;
	int poss = 0, must = 0;
	for (int i = 0; i < n; ++i) {
		int k;
		cin >> k;
		int cnt = 0;
		for (int j = 0; j < k; ++j) {
			double x;
			cin >> x;
			if (x < e) cnt++;
		}
		if (cnt * 2 <= k) continue;
		if (k > D)
			must++;
		else
			poss++;  
	}
	cout << fixed << setprecision(1) << poss * 100.0 / n << "% ";
	cout << fixed << setprecision(1) << must * 100.0 / n << "%\n";
	return 0;
} 
