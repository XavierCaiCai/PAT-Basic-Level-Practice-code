#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	vector<pair<double, int>> a;
	for (int i = 0; i < n; ++i) {
		int id, x, y;
		cin >> id >> x >> y;
		a.emplace_back(sqrt(x * x + y * y), id);
	}
	sort(a.begin(), a.end());
	cout << setw(4) << setfill('0') << (*a.begin()).second;
	cout << ' ';
	cout << setw(4) << setfill('0') << (*--a.end()).second;
	cout << '\n';
	return 0;
} 
