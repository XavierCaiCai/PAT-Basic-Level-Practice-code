#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	int x = 0, y = 0;
	for (int i = 0; i < n; ++i) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		bool flag1 = (b == a + c);
		bool flag2 = (d == a + c);
		if (flag1 && flag2) continue;
		if (flag1) y++;
		if (flag2) x++;
	}
	cout << x << ' ' << y << '\n';
	return 0;
} 
