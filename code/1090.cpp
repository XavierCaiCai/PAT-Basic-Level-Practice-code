#include <bits/stdc++.h>
using namespace std;
struct cake {
	double num, val;
};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	map<int, vector<int>> mp;
	for (int i = 0, x, y; i < n; ++i) {
		cin >> x >> y;
		mp[x].push_back(y);
		mp[y].push_back(x);
	}
	for (int i = 0; i < m; ++i) {
		int k;
		cin >> k;
		vector<int> a(k);
		map<int, bool> vis;
		for (int i = 0; i < k; ++i) 
			cin >> a[i], vis[a[i]] = true;
		bool flag = true;
		for (auto e : a) {
			for (auto ee : mp[e]) {
				if (vis[ee]) flag = false;
			}
		}
		cout << (flag ? "Yes\n" : "No\n");
	}
	return 0;
} 	
