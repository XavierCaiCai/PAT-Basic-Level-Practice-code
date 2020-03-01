#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	char c;
	cin >> n >> c;
	for (int i = 0; i < n; ++i)
		cout << c;
	cout << '\n';
	for (int i = 0; i < (n + 1) / 2 - 2; ++i) {
		cout << c;
		for (int j = 0; j < n - 2; ++j)
			cout << ' ';
		cout << c << '\n';
	}
	for (int i = 0; i < n; ++i)
		cout << c;
	cout << '\n';
	return 0;
} 
