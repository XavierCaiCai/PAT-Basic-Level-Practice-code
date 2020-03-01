#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	m %= n;
	vector<int> a(n);
	for (int& e : a)
		cin >> e;
	rotate(a.begin(), a.begin() + n - m, a.end());
	for (int i = 0; i < a.size(); ++i) 
		cout << a[i] << (i == a.size() - 1 ? '\n' : ' ');
	return 0;
} 
