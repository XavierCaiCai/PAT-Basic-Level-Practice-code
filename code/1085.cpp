#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	map<string, pair<double, int>> mp;
	for (int i = 0; i < n; ++i) {
		string id, sch;
		int score;
		cin >> id >> score >> sch;
		auto to_low = [](string s) {
			for (int i = 0; i < s.size(); ++i)
				if (s[i] <= 'Z') s[i] -= 'A' - 'a';
			return s;
		};
		sch = to_low(sch);
		mp[sch].second++;
		if (id[0] == 'B') mp[sch].first += score / 1.5;
		if (id[0] == 'A') mp[sch].first += score;
		if (id[0] == 'T') mp[sch].first += score * 1.5;
	}
	vector<tuple<int, int, string>> ans;
	for (auto e : mp) 
		ans.emplace_back((int)(-e.second.first), e.second.second, e.first);
	sort(ans.begin(), ans.end());
	cout << ans.size() << '\n';
	for (int i = 0, j = 0; i < ans.size(); i = j) {
		while (j < ans.size() && get<0>(ans[j]) == get<0>(ans[i])) ++j;
		for (int k = i; k < j; ++k) {
			cout << i + 1 << ' ' << get<2>(ans[k]) << ' ';
			cout << -get<0>(ans[k]) << ' ';
			cout << get<1>(ans[k]) << '\n';
		}
	}
	return 0;
} 
