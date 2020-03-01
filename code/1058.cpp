#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	vector<pair<int, int>> quest(m);
	for (int i = 0; i < m; ++i) {
		cin >> quest[i].first;
		int total, cnt;
		cin >> total >> cnt;
		quest[i].second = 0;
		for (int j = 0; j < cnt; ++j) {
			char c;
			cin >> c;
			quest[i].second |= (1 << (c - 'a'));
		}
	}
	vector<int> wrong_cnt(m);
	for (int i = 0; i < n; ++i) {
		int grade = 0;
		for (int j = 0; j < m; ++j) {
			while (!isdigit(cin.peek())) cin.get();
			int cnt, choose = 0;
			cin >> cnt;
			for (int k = 0; k < cnt; ++k) {
				char c;
				cin >> c;
				choose |= (1 << (c - 'a'));
			}
			if ((choose ^ quest[j].second) == 0) 
				grade += quest[j].first;
			else 
				wrong_cnt[j]++;
		}
		cout << grade << '\n';
	}
	int maxn = 0;
	for (auto e : wrong_cnt) 
		maxn = max(maxn, e);
	if (maxn == 0) {
		cout << "Too simple\n";
		exit(0);
	}
	cout << maxn;
	for (int i = 0; i < m; ++i) {
		if (wrong_cnt[i] != maxn) continue;
		cout << ' ' << i + 1;
	}
	return 0;
} 
