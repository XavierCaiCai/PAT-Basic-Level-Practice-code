#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	vector<string> week = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
	bool flag = false;
	for (int i = 0; i < a.size() && i < b.size(); ++i) {
		if (a[i] != b[i]) continue;
		if (flag) {
			if (a[i] >= '0' && a[i] <= '9') {
				cout << 0 << a[i] - '0' << ':';
				break;
			}
			else if (a[i] >= 'A' && a[i] <= 'N') {
				cout << (a[i] - 'A' + 10) << ':';
			}
		}
		if (!flag && a[i] >= 'A' && a[i] <= 'G') {
			cout << week[a[i] - 'A' + 1] << ' ';
			flag = true;
		}
	}
	for (int i = 0; i < c.size() && i < d.size(); ++i) {
		if (c[i] != d[i]) continue;
		if ((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z')) {
			cout << setw(2) << setfill('0') << i << '\n';
			break;
		}
	}
	return 0;
} 	
