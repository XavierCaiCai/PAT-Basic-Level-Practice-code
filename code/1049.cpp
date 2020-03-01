#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	vector<double> a(n);
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	double ans = 0;
	for (int i = 0; i < n; ++i)
		ans += a[i] * (i + 1) * (n - i);
	cout << fixed << setprecision(2) << ans << '\n';
	return 0;
} 
