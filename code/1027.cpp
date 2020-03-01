#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	char c;
	cin >> n >> c;
	int num = 1, sum = 1;
	for (int i = 3; ; i += 2) {
		if (sum > n) {
			sum -= (i - 2) * 2;
			num = i - 4;
			break;
		}
		sum += i * 2;
	}
	for (int i = num; i >= 1; i -= 2) {
		for (int j = 0; j < num / 2 - i / 2; ++j)
			cout << ' ';
		for (int j = 0; j < i; ++j)
			cout << c;
		cout << '\n';
	}
	for (int i = 3; i <= num; i += 2) {
		for (int j = 0; j < num / 2 - i / 2; ++j)
			cout << ' ';
		for (int j = 0; j < i; ++j)
			cout << c;
		cout << '\n';
	}
	cout << n - sum << '\n';
	return 0;
} 
