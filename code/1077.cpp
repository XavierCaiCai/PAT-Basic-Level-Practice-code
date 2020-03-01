#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		double g1;
		cin >> g1;
		int cnt = -2, sum = 0, maxn = -1, minn = m + 1;
		for (int i = 0, x; i < n - 1; ++i) {
			cin >> x;
			if (x < 0 || x > m) continue;
			cnt++;
			sum += x;
			maxn = max(maxn, x);
			minn = min(minn, x);
		}
		double g2 = 1.0 * (sum - maxn - minn) / (cnt * 2);
		double ans = g2 + g1 / 2.0;
		cout << (int)(ans + 0.5) << '\n';
		//cout << fixed << setprecision(0) << ans << '\n';
	}
	return 0;
} 
