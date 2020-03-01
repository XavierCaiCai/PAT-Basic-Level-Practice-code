#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n; 
	cin >> n;
	map<string, int> rank;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		rank[s] = i + 1;
	}
	map<string, bool> geted;
	auto isprime = [](int x) {
		if (x == 1 || x == 0) return false;
		for (int i = 2; i * i <= x; ++i)
			if (x % i == 0) return false;
		return true;
	};
	int k;
	cin >> k;
	for (int i = 0; i < k; ++i) {
		string s;
		cin >> s;
		if (rank.find(s) == rank.end()) {
			cout << s << ": Are you kidding?\n";
			continue;
		}
		if (geted[s]) {
			cout << s << ": Checked\n";
			continue;
		}
		geted[s] = true;
		if (rank[s] == 1) 
			cout << s << ": Mystery Award\n";
		else if (isprime(rank[s])) 
			cout << s << ": Minion\n";
		else 
			cout << s << ": Chocolate\n";
	}
	return 0;
} 
