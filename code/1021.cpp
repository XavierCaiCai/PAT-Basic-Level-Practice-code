#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s;
	cin >> s;
	map<int, int> mp;
	for (int i = 0; i < s.size(); ++i) {
		mp[s[i] - '0']++;
	}
	for (auto e : mp)
		cout << e.first << ':' << e.second << '\n';
	return 0;
} 
