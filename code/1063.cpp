#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	double ans  = 0;
	for (int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;
		ans = max(ans, sqrt(1.0 * a * a + b * b));
	}
	cout << fixed << setprecision(2) << ans << '\n';
	return 0;
} 
