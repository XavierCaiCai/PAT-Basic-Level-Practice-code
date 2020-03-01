#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	set<int> s;
	for (int i = 1; i <= n; ++i) {
		s.insert(i / 2 + i / 3 + i / 5);
	}
	cout << s.size() << '\n';
	return 0;
} 
