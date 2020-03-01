#include <bits/stdc++.h>
using namespace std;
struct cake {
	double num, val;
};
int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(nullptr);
	//cout.tie(nullptr);
	int m, x, y;
	cin >> m >> x >> y;
	double a1, a2, a3 = -1;
	for (int i = 99; i >= 10; --i) {
		a1 = i;
		a2 = i / 10 + i % 10 * 10;
		double dis = abs(a1 - a2);
		if (dis / x == a2 / y) {
			a3 = dis / x;
			break;
		}
	}
	if (a3 == -1) {
		cout << "No Solution\n";
		exit(0);
	}
	cout << a1 << ' ';
	auto solve = [&](double x) {
		if (x < m)  return "Gai";
		if (x == m) return "Ping";
		return "Cong";
	};
	cout << solve(a1) << ' ';
	cout << solve(a2) << ' ';
	cout << solve(a3) << '\n';
	return 0;
} 	
