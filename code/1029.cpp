#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string a, b;
	getline(cin, a);
	getline(cin, b);
	vector<char> bad;
	vector<bool> ok(260, false);
	for (auto e : b)
		ok[e] = true;
	vector<bool> vis_bad(260, false);
	for (auto e : a) {
		if (!ok[e]) {
			if (e >= 'a' && e <= 'z') e -= 32;
			if (!vis_bad[e]) bad.push_back(e);
			vis_bad[e] = true;
		}
	}
	for (auto e : bad) 
		cout << e;
	cout << '\n';
	return 0;
} 
