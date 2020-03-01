#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < 4; ++j) {
			string s;
			cin >> s;
			if (s[2] == 'T') cout << s[0] - 'A' + 1;
		}
	}
	cout << '\n';
	return 0;
} 
