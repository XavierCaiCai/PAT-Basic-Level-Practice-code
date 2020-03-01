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
		int data;
		cin >> add >> data >> nxt;
		mp[add] = {data, nxt};
	}
	vector<pair<string, int>> lis;
	string tmp = start;
	while (tmp != "-1") {
		int data = mp[tmp].first;
		if (data < 0) lis.emplace_back(tmp, data);
		tmp = mp[tmp].second;
	}
	tmp = start;
	while (tmp != "-1") {
		int data = mp[tmp].first;
		if (data >= 0 && data <= k) lis.emplace_back(tmp, data);
		tmp = mp[tmp].second;
	}
	tmp = start;
	while (tmp != "-1") {
		int data = mp[tmp].first;
		if (data > k) lis.emplace_back(tmp, data);
		tmp = mp[tmp].second;
	}
	for (int i = 0; i < lis.size() - 1; ++i) 
		cout << lis[i].first << ' ' << lis[i].second << ' ' << lis[i + 1].first << '\n';
	cout << lis[lis.size() - 1].first << ' ' << lis[lis.size() - 1].second << ' ' << -1 << '\n';
	return 0;
} 
