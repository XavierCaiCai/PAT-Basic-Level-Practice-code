#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string a;
	string b;
	vector<bool> vis(260);
	string ans;
	getline(cin, a);
	getline(cin, b);
	auto solve = [&](string s) {
		for (int i = 0; i < s.size(); ++i) {
			if (vis[s[i]]) continue;
			ans.push_back(s[i]);
			vis[s[i]] = true;
		}
	};
	solve(a);
	solve(b);
	cout << ans << '\n';
	return 0;
}  
