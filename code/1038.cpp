#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	map<int, int> mp;
	for (int i = 0, x; i < n; ++i) {
		cin >> x;
		mp[x]++;
	}
	int k;
	cin >> k;
	vector<int> querys(k);
	for (int& e : querys) cin >> e;
	for (int i = 0; i < k; ++i) 
		cout << mp[querys[i]] << (i == k - 1 ? '\n' : ' ');
	return 0;
} 
