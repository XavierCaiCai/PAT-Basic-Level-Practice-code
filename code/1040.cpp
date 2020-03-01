#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s;
	cin >> s;
	const int MOD = 1e9 + 7;
	vector<int> cnt(3);
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == 'P') cnt[0] = (cnt[0] + 1) % MOD;
		if (s[i] == 'A') cnt[1] = (cnt[1] + cnt[0]) % MOD;
		if (s[i] == 'T') cnt[2] = (cnt[2] + cnt[1]) % MOD;
	}
	cout << cnt[2] << '\n';
	return 0;
} 
