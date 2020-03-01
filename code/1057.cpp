#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s;
	getline(cin, s);
	int sum = 0;
	for (auto e : s) {
		if (e >= 'A' && e <= 'Z') sum += e - 'A' + 1;
		if (e >= 'a' && e <= 'z') sum += e - 'a' + 1;
	}
	int cnt1 = 0, cnt0 = 0;
	while (sum) {
		sum % 2 ? cnt1++ : cnt0++;
		sum /= 2;
	}
	cout << cnt0 << ' ' << cnt1 << '\n';
	return 0;
} 
