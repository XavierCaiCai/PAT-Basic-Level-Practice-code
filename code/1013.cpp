#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int m, n;
	cin >> m >> n;
	const int MAXN = 1000005;
	vector<int> prime;
	vector<int> vis(MAXN + 1, true);
	vis[0] = vis[1] = false;
	for (int i = 2; i <= MAXN; ++i) {
		if (vis[i]) prime.push_back(i);
		for (int j = 0; j < prime.size(); ++j) {
			if (1LL * i * prime[j] > MAXN) break;
			vis[i * prime[j]] = false;
			if (i % prime[j] == 0) break;
		}
	}
	vector<int> ans;
	for (int i = --m; i < n; ++i)
		ans.push_back(prime[i]);
	for (int i = 0; i < ans.size(); i += 10) {
		int end = min(i + 10, (int)ans.size());
		for (int j = i; j < end; j++) {
			cout << ans[j] << (j == end - 1 ? '\n' : ' ');
		}
	}
	return 0;
} 
