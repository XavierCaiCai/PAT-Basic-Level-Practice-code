#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T;
	for (cin >> T; T--;) {
		string str;
		cin >> str;
		auto check1 = [](string s) {
			for (int i = 0; i < s.size(); ++i) 
				if (s[i] != 'P' && s[i] != 'A' && s[i] != 'T') return false;
			return true;
		};
		auto check2 = [](string s) -> bool {
			int p = -1, t = -1;
			for (int i = 0; i < s.size(); ++i) {
				if (s[i] == 'A')continue;
				if (s[i] == 'P') {
					if (p == -1)
						p = i;
					else 
						return false;
				}
				if (s[i] == 'T') {
					if (t == -1) 
						t= i;
					else return false;
				}
			}
			return p + 1 < t;
		};
		auto check3 = [](string s) -> bool {
			vector<int> cnt(3);
			int* ptr = &cnt[0];
			for (int i = 0; i < s.size(); ++i) {
				if (s[i] != 'A') {
					ptr++;
					continue;
				}
				++(*ptr);
			}
			return (cnt[2] == cnt[0] * cnt[1]);
		};
		if (check1(str) && check2(str) && check3(str)) 
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
	return 0;
} 
