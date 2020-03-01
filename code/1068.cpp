#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, lo;
	cin >> m >> n >> lo;
	vector<vector<int64_t>> a(n, vector<int64_t>(m));
	map<int64_t, int> mp;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> a[i][j], mp[a[i][j]]++;
	auto check = [&](int x, int y) {
		auto check_pos = [&](int xx, int yy) {
			if (xx < 0 || xx >= n || yy < 0 || yy >= m) return false;
			return true;
		};
		vector<int> dx = {0, 0, 1, 1, 1, -1, -1, -1};
		vector<int> dy = {1, -1, 1, 0, -1, 1, 0, -1};
		for (int i = 0; i < 8; ++i) {
			int xx = x + dx[i], yy = y + dy[i];
			if (check_pos(xx, yy) && abs(a[xx][yy] - a[x][y]) <= lo) return false;
		}
		return true;
	};
	vector<tuple<int, int, int64_t>> ans;
	for (int i = 0; i < n; ++i) 
		for (int j = 0; j < m; ++j)
			if (mp[a[i][j]] == 1 && check(i, j)) ans.emplace_back(j + 1, i + 1, a[i][j]);
	if (ans.size() == 0) 
		cout << "Not Exist\n";
	else if (ans.size() > 1)
		cout << "Not Unique\n";
	else 
		cout << "(" << get<0>(ans[0]) << ", " << get<1>(ans[0]) << "): " << get<2>(ans[0]) << '\n';
	return 0;
} 
