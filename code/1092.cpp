#include <bits/stdc++.h>
using namespace std;
struct cake {
	double num, val;
};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	vector<pair<int, int>> a(n);
	for (int i = 0; i < n; ++i) 
		a[i].second = i + 1;
	for (int i = 0; i < m; ++i) {
		for (int j = 0, x; j < n; ++j) {
			cin >> x;
			a[j].first -= x;
		}
	}
	sort(a.begin(), a.end());
	cout << -a[0].first << '\n';
	int lo = 0, hi = 0;
	while (hi < n && a[hi].first == a[lo].first) hi++;
	for (int i = lo; i < hi; ++i)
		cout << a[i].second << (i == hi - 1 ? '\n' : ' ');
	return 0;
} 	
