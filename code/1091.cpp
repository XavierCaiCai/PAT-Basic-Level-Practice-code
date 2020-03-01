#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	for (int i = 0, x; i < n; ++i) {
		cin >> x;
		int tmp = 1;
		while (tmp <= x) tmp *= 10;
		bool flag = false;
		for (int i = 0; i < 10; ++i) {
			if (x * x * i % tmp == x) {
				flag = true;
				cout << i << ' ' << x * x * i << '\n';
				break;
			}
		}
		if (!flag) cout << "No\n";
	}
	return 0;
} 
