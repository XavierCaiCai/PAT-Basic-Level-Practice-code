#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int a, b;
	cin >> a >> b;
	vector<pair<int, int>> ans;
	if (b == 0) {
		cout << "0 0\n";
		exit(0);
	}
	ans.emplace_back(a * b, b - 1);
	while (cin >> a >> b) {
		if (b == 0) continue;
		ans.emplace_back(a * b, b - 1);
	}
	for (int i = 0; i < ans.size(); ++i) {
		cout << ans[i].first << ' ' << ans[i].second << (i == ans.size() - 1 ? '\n' : ' ');
	}
	return 0;
} 
