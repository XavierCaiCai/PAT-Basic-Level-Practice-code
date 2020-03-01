#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int& e : a) cin >> e;
	sort(a.begin(), a.end());
	double ans = a[0];
	for (int i = 1; i < n; ++i)
		ans = ans / 2 + a[i] / 2.0;
	cout << static_cast<int>(ans) << '\n';
	return 0;
} 
