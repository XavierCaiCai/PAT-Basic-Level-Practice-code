#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	vector<int> score(m), right(m);
	for (int& e : score) cin >> e;
	for (int& e : right) cin >> e;
	for (int i = 0; i < n; ++i) {
		int sum = 0;
		for (int j = 0, x; j < m; ++j) {
			cin >> x;
			if (x == right[j]) sum += score[j];
		}
		cout << sum << '\n';
	}
	return 0;
} 
