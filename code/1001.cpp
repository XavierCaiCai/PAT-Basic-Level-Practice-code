#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	int ans = 0;
	while (n != 1) {
		if (n & 1) 
			n = (3 * n + 1) / 2;
		else 
			n = n / 2;
		ans++;
	}
	cout << ans << '\n';
	return 0;
} 
