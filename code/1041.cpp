#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	vector<tuple<string, int, int>> a(n);
	for (int i = 0; i < n; ++i) {
		string id;
		int x, y;
		cin >> id >> x >> y;
		a[i] = tie(id, x, y);
	}
	int m;
	for (cin >> m; m--;) {
		int x;
		cin >> x;
		for (auto e : a) {
			if (x == get<1>(e)) {
				cout << get<0>(e) << ' ' << get<2>(e) << '\n';
			}
		}
	}
	return 0;
} 
