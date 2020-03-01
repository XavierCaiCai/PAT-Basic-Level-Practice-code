#include <bits/stdc++.h>
using namespace std;
struct stu {
	int id, d, c;
	stu() {}
	stu(int _id, int _d, int _c) : id(_id), d(_d), c(_c) {}
};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, l, h;
	cin >> n >> l >> h;
	vector<vector<stu>> lv(4);
	for (int i = 0; i < n; ++i) {
		int id, d, c;
		cin >> id >> d >> c;
		if (d < l || c < l) continue;
		if (d >= h && c >= h) lv[0].emplace_back(id, d, c);
		else if (d >= h && c < h) lv[1].emplace_back(id, d, c);
		else if (d < h && c < h && d >= c) lv[2].emplace_back(id, d, c);
		else lv[3].emplace_back(id, d, c);
	}
	int sum = 0;
	for (int i = 0; i < 4; ++i) {
		sum += lv[i].size();
		sort(lv[i].begin(), lv[i].end(), [](stu lhs, stu rhs) {
			if (lhs.d == rhs.d && lhs.d + lhs.c == rhs.d + rhs.c) 
				return lhs.id < rhs.id;
			if (lhs.d + lhs.c == rhs.d + rhs.c) return lhs.d > rhs.d;
			return lhs.d + lhs.c > rhs.d + rhs.c;
		});
	}
	cout << sum << '\n';
	for (int i = 0; i < 4; ++i) {
		for (auto e : lv[i]) {
			cout << e.id << ' ' << e.d << ' ' << e.c << '\n';
		}
	}
	return 0;
} 	
