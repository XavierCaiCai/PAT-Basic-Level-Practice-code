#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	if (n < k) {
		cout << 404 << '\n';
		exit(0);
	}
	int64_t num = 0, tmp = 1;
	for (int i = 0; i < k; ++i) {
		num = num * 10 + (s[i] - '0');
		tmp *= 10;
	}
	auto check = [](int64_t x) {
		for (int i = 2; 1ll * i * i <= x; ++i) 
			if (x % i == 0) return false;
		return true;
	};
	if (check(num)) {
		cout << setw(k) << setfill('0') << num << '\n';
		exit(0);
	}
	for (int i = k; i < n; ++i) {
		num = num * 10 + (s[i] - '0');
		num %= tmp;
		if (check(num)) {
			cout << setw(k) << setfill('0') << num << '\n';
			exit(0);
		}
	}
	cout << 404 << '\n';
	return 0;
} 
