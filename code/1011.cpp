#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T;
	cin >> T;
	for (int cas = 1; cas <= T; ++cas) {
		int64_t a, b, c;
		cin >> a >> b >> c;
		if (a + b > c) 
			cout << "Case #" << cas << ": true\n";
		else 
			cout << "Case #" << cas << ": false\n";
	}
	return 0;
} 
