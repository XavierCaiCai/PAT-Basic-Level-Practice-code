#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, loop, start;
	cin >> n >> loop >> start;
	vector<string> name(n);
	for (auto& e : name) cin >> e;
	if (start > n) {
		cout << "Keep going...\n";
		exit(0);
	}
	map<string, bool> mp;
	for (int i = start - 1; i < n; i += loop) {
		while (i < n && mp[name[i]]) i++;
		if (i == n) break;
		cout << name[i] << '\n';
		mp[name[i]] = true;
	}
	return 0;
} 
