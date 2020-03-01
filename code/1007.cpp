#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	vector<int> prime;
	vector<int> vis(n + 1, true);
	vis[0] = vis[1] = false;
	for (int i = 2; i <= n; ++i) {
		if (vis[i]) prime.push_back(i);
		for (int j = 0; j < prime.size(); ++j) {
			if (1LL * i * prime[j] > n) break;
			vis[i * prime[j]] = false;
			if (i % prime[j] == 0) break;
		}
	}
	int ans = 0;
	for (int i = 1; i < prime.size(); ++i) {
		if (prime[i] - prime[i - 1] == 2)
			ans++;
	}
	cout << ans << '\n';
	return 0;
} 
