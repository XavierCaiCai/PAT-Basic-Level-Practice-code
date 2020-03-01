#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	vector<pair<int, int>> quest(m);
	vector<vector<int>> wrong_cnt(m);
	for (int i = 0; i < m; ++i) {
		int score, total_num, right_num;
		cin >> score >> total_num >> right_num;
		int right = 0;
		for (int j = 0; j < right_num; ++j) {
			char c;
			cin >> c;
			right |= (1 << (c - 'a'));
		}
		quest[i] = {score, right};
		wrong_cnt[i].assign(total_num, 0);
	}
	for (int i = 0; i < n; ++i) {
		double grade = 0;
		for (int j = 0; j < m; ++j) {
			while (!isdigit(cin.peek())) cin.get();
			int choose_num, choose = 0;
			cin >> choose_num;
			for (int k = 0; k < choose_num; ++k) {
				char c;
				cin >> c;
				choose |= (1 << (c - 'a'));
			}
			int right = quest[j].second;
			if ((choose ^ right) == 0) {
				grade += quest[j].first;
			} 
			else {
				if ((choose | right) == right) 
					grade += 0.5 * quest[j].first;
				for (int k = 0; k < wrong_cnt[j].size(); ++k) 
					if ((choose ^ right) & (1 << k)) wrong_cnt[j][k]++;
			}
		}
		cout << fixed << setprecision(1) << grade << '\n';
	}
	int maxn = 0;
	for (auto it : wrong_cnt)
		for (auto e : it)
			maxn = max(maxn, e);
	if (maxn == 0) {
		cout << "Too simple\n";
		exit(0);
	}
	for (int i = 0; i < m; ++i) 
		for (int j = 0; j < wrong_cnt[i].size(); ++j) 
			if (wrong_cnt[i][j] == maxn) 
				cout << maxn << ' ' << i + 1 << '-' << (char)(j + 'a') << '\n';
	return 0;
} 
