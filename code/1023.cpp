#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	vector<int> cnt(10);
	for (int i = 0; i < 10; ++i) 
		cin >> cnt[i];
	for (int i = 1; i < 10; ++i) {
		if (cnt[i]) {
			cout << i;
			cnt[i]--;
			break;
		}
	}
	for (int i = 0; i < 10; ++i)
		for (int j = 0; j < cnt[i]; ++j)
			cout << i;
	cout << '\n';
	return 0;
} 
