#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	vector<int> a(3);
	for (int i = 0; i < 3; ++i) {
		a[i] = n % 10;
		n /= 10;
	}
	reverse(a.begin(), a.end());
	for (int i = 0; i < a[0]; ++i)
		cout << 'B';
	for (int i = 0; i < a[1]; ++i)
		cout << 'S';
	for (int i = 0; i < a[2]; ++i)
		cout << i + 1;
	return 0;
} 
