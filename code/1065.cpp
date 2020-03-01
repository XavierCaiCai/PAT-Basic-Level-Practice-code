#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	map<string, string> mp;
	for (int i = 0; i < n; ++i) {
		string a, b;
		cin >> a >> b;
		mp[a] = b;
		mp[b] = a;
	}
	int m;
	cin >> m;
	map<string, bool> vis;
	vector<string> p(m);
	for (int i = 0; i < m; ++i) 
		cin >> p[i], vis[p[i]] = true;
	vector<string> ans;
	for (int i = 0; i < m; ++i)
		if (!vis[mp[p[i]]]) ans.push_back(p[i]);
	sort(ans.begin(), ans.end());
	cout << ans.size() << '\n';
	for (int i = 0; i < ans.size(); ++i) 
		cout << ans[i] << (i == ans.size() - 1 ? '\n' : ' ');
	return 0;
} 
