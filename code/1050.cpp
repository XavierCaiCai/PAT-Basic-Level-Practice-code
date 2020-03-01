#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int N;
	cin >> N;
	int n, m;
	for (int i = 1; i * i <= N; ++i) {
		if (N % i == 0) {
			m = i;
			n = N / i;
		}
	}
	vector<int> a(N);
	for (int& e : a) 
		cin >> e;
	sort(a.begin(), a.end(), greater<int>());
	vector<vector<int>> ans(n, vector<int>(m, -1));
	int cnt = 0, x = 0, y = -1;
	while (cnt < N) {
		while (y + 1 < m && ans[x][y + 1] == -1) ans[x][++y] = a[cnt++];
		while (x + 1 < n && ans[x + 1][y] == -1) ans[++x][y] = a[cnt++];
		while (y - 1 >= 0 && ans[x][y - 1] == -1) ans[x][--y] = a[cnt++];
		while (x - 1 >= 0 && ans[x - 1][y] == -1) ans[--x][y] = a[cnt++];
	}
	for (auto it : ans) 
		for (int i = 0; i < it.size(); ++i) 
			cout << it[i] << (i == it.size() - 1 ? '\n' : ' ');
	return 0;
} 
