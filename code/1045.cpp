#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	vector<int> a(n + 2), pre_max(n + 2, -1), suf_min(n + 2, INT_MAX);
	for (int i = 1; i <= n; ++i)
		cin >> a[i];
	for (int i = 1; i <= n; ++i)
		pre_max[i] = max(pre_max[i - 1], a[i]);
	for (int i = n; i >= 0; --i) 
		suf_min[i] = min(suf_min[i + 1], a[i]);
	vector<int> ans;
	for (int i = 1; i <= n; ++i) {
		if (a[i] > pre_max[i - 1] && a[i] < suf_min[i + 1])
			ans.push_back(a[i]);
	}
	sort(ans.begin(), ans.end());
	cout << ans.size() << '\n';
	for (int i = 0; i < ans.size(); ++i) {
		cout << ans[i] << (i == ans.size() - 1 ? '\n' : ' ');
	}
	if (ans.size() == 0) cout << '\n';
	return 0;
} 	
