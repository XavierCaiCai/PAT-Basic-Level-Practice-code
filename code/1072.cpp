#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	map<string, bool> mp;
	for (int i = 0; i < m; ++i) {
		string s;
		cin >> s;
		mp[s] = true;
	}
	vector<pair<string, vector<string>>> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i].first;
		int k;
		cin >> k;
		for (int j = 0; j < k; ++j) {
			string s;
			cin >> s;
			if (mp[s]) a[i].second.push_back(s);
		}
	}
	int cnt1 = 0, cnt2 = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i].second.size() == 0) continue;
		cout << a[i].first << ":";
		for (auto e : a[i].second) cout << ' ' << e;
		cout << '\n';
		cnt1++;
		cnt2 += a[i].second.size();
	}
	cout << cnt1 << ' ' << cnt2 << '\n';
	return 0;
} 
