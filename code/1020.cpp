#include <bits/stdc++.h>
using namespace std;
struct cake {
	double num, val;
};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, need;
	cin >> n >> need;
	vector<cake> a(n);
	for (int i = 0; i < n; ++i)
		cin >> a[i].num;
	for (int i = 0; i < n; ++i)
		cin >> a[i].val;
	sort(a.begin(), a.end(), [](cake lhs, cake rhs) {
		return lhs.val * rhs.num > rhs.val * lhs.num;
	});
	double ans = 0;
	for (auto e : a) {
		if (e.num >= need) {
			ans += 1.0 * e.val * need / e.num;
			need = 0;
			break;
		}
		else ans += e.val;
		need -= e.num;
	}
	cout << fixed << setprecision(2) << ans << '\n';
	return 0;
} 	
