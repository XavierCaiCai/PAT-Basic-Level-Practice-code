#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	while (cin >> n) {
		vector<tuple<int, string, string>> stu;
		for (int i = 0; i < n; ++i) {
			string name, id;
			int score;
			cin >> name >> id >> score;
			stu.emplace_back(score, name, id);
		}
		sort(stu.begin(), stu.end());
		auto maxn = *stu.begin();
		auto minn = *--stu.end();
		cout << get<1>(minn) << ' ' << get<2>(minn) << '\n';
		cout << get<1>(maxn) << ' ' << get<2>(maxn) << '\n';
	}
	return 0;
} 
