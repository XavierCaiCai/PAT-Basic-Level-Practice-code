#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string a, b;
	int da, db;
	cin >> a >> da >> b >> db;
	auto solve = [](string s, int d) {
		int64_t res = 0;
		for (int i = 0; i < s.size(); ++i) {
			s[i] -= '0';
			if (s[i] != d) continue;
			res = res * 10 + s[i];
		}
		return res;
	};
	cout << solve(a, da) + solve(b, db) << '\n';
	return 0;
} 
