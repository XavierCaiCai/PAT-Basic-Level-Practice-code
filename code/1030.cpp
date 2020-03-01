#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, p;
	cin >> n >> p;
	vector<int> a(n);
	for (int& e : a) cin >> e;
	sort(a.begin(), a.end());
	int ans = 0;
	for (int i = 0, j = 0; i < n; ++i) {
		while (j < n && 1LL * a[i] * p >= a[j]) j++;
		ans = max(ans, j - i);
	}
	cout << ans << '\n';
	return 0;
} 
