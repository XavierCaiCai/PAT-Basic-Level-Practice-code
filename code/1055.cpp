#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, k;
	cin >> n >> k; 
	vector<pair<int, string>> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i].second >> a[i].first;
		a[i].first *= -1;
	}
	sort(a.begin(), a.end(), greater<pair<int, string>>());
	vector<deque<string>> ans(k);
	for (int i = 0; i < k; ++i) {
		int lo = n / k * i;
		int hi = n / k * (i + 1);
		if (i == k - 1) hi = n;
		ans[i].push_back(a[hi - 1].second);
		int j = hi - 2;
		while (j >= lo) {
			if (j >= lo) ans[i].push_front(a[j--].second);
			if (j >= lo) ans[i].push_back(a[j--].second);
		}
	}
	for (int i = (int)ans.size() - 1; i >= 0; --i) 
		for (int j = 0; j < ans[i].size(); ++j) 
			cout << ans[i][j] << (j == ans[i].size() - 1 ? '\n' : ' ');
	return 0;
} 
