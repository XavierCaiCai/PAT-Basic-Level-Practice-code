#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	vector<vector<string>> a(3);
	for (int i = 0; i < 3; ++i) {
		string s;
		getline(cin, s);
		for (int j = 0; j < s.size(); ++j) {
			int lo = j;
			while (lo < s.size() && s[lo] != '[') lo++;
			if (lo >= s.size()) break;
			int hi = lo + 1;
			while (hi < s.size() && s[hi] != ']') hi++;
			if (hi >= s.size()) break;
			string tmp = s.substr(lo + 1, hi - lo - 1);
			a[i].push_back(tmp);
			j = hi;
		}
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		string res = "";
		vector<int> order = {0, 1, 2, 1, 0};
		bool flag = true;
		for (int j = 0, x; j < 5; ++j) {
			if (j == 1) res += "(";
			if (j == 4) res += ")";
			cin >> x;
			if (x < 1 || x > a[order[j]].size()) 
				flag = false;
			else 
				res += a[order[j]][x- 1];
		}
		if (flag)
			cout << res << '\n';
		else 
			cout << "Are you kidding me? @\\/@\n";
	}
	return 0;
} 
