#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	map<int, bool> mp;
	for (int i = 0, x; i< n; ++i) {
		cin >> x;
		auto cal = [](int x) {
			int res = 0;
			while (x) {
				res += x % 10;
				x /= 10;
			}
			return res;
		};
		mp[cal(x)] = true;
	}
	cout << mp.size() << '\n';
	bool flag = false;
	for (auto e : mp) {
		if (flag) cout << ' ';
		flag = true;
		cout << e.first;
	}
	cout << '\n';
	return 0;
} 
