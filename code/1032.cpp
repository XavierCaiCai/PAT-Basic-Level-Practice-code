#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	map<int, int> mp;
	for (int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		mp[x] += y;
	}
	int id, sum = -1;
	for (auto e : mp) {
		if (e.second > sum) {
			sum = e.second;
			id = e.first;
		}
	}
	cout << id << ' ' << sum << '\n';
	return 0;
} 
