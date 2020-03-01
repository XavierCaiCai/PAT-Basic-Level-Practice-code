#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int& e : a) cin >> e;
	int64_t ans = 0;
	for (int i = 0; i < n; ++i) {
		ans += 1LL * a[i] * 11 * (n - 1);
	}
	cout << ans << '\n';
	return 0;
} 
