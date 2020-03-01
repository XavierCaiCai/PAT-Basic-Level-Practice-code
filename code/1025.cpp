#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string start;
	int n, k;
	cin >> start >> n >> k;
	map<string, pair<int, string>> mp;
	for (int i = 0; i < n; ++i) {
		string add, nxt;
		int dat;
		cin >> add >> dat >> nxt;
		mp[add] = {dat, nxt}; 
	}
	vector<pair<string, int>> lis;
	while (start != "-1") {
		lis.emplace_back(start, mp[start].first);
		start = mp[start].second;
	}
	for (int i = k; i <= lis.size(); i += k) {
		reverse(lis.begin() + i - k, lis.begin() + i);
	}
	for (int i = 0; i < lis.size() - 1; ++i)
		cout << lis[i].first << ' ' << lis[i].second << ' ' << lis[i + 1].first << '\n';
	cout << lis[lis.size() - 1].first << ' ' << lis[lis.size() - 1].second << " -1\n";
	return 0;
} 
