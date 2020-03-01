#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	vector<vector<int>> a(5);
	for (int i = 0, x; i < n; ++i) {
		cin >> x;
		if (x % 5 == 0) {
			if (x % 10 == 0) a[x % 5].push_back(x);
			continue;
		}
		a[x % 5].push_back(x);
	}
	if (a[0].size() == 0) cout << "N ";
	else cout << accumulate(a[0].begin(), a[0].end(), 0) << ' ';
	if (a[1].size() == 0) {
		cout << "N ";
	}
	else {
		int sum = 0;
		for (int i = 0, tmp = 1; i < a[1].size(); ++i, tmp *= -1) 
			sum += tmp * a[1][i];
		cout << sum << ' ';	
	}
	if (a[2].size() == 0) cout << "N ";
	else cout << a[2].size() << ' ';
	if (a[3].size() == 0) cout << "N ";
	else cout << fixed << setprecision(1) << 1.0 * accumulate(a[3].begin(), a[3].end(), 0) / a[3].size() << ' ';
	if (a[4].size() == 0) cout << "N\n";
	else cout << *max_element(a[4].begin(), a[4].end()) << '\n';
	return 0;
} 
