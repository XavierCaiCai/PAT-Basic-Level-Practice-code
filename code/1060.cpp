#include <bits/stdc++.h>
using namespace std;
struct BIT {
	vector<int64_t> cnt;
	BIT() {}
	BIT(int size): cnt(size + 1) {}
	void add (int pos, int64_t val) {
		for (++pos; pos < cnt.size(); pos += pos & -pos) 
			cnt[pos] += val;
	}
	int64_t query(int pos) {
		int64_t res = 0;
		for (++pos; pos > 0; pos -= pos & -pos)
			res += cnt[pos];
		return res;
	}
};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n; 
	cin >> n;
	vector<int> a(n);
	for (int& e : a) cin >> e;
	sort(a.begin(), a.end());
	int ans = 0;
	for (int i = n; i > 0; --i) {
		if (a[n - i] > i) {
			ans = max(ans, i);
			break;
		}
	}
	cout << ans << '\n';
	return 0;
} 
