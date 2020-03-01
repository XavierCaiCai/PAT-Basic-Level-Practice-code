#include <bits/stdc++.h>
using namespace std;
int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(nullptr);
	//cout.tie(nullptr);
	int n;
	cin >> n;
	getchar();
	for (int i = 0; i < n; ++i) {
		string s;
		getline(cin, s);
		if (s.size() < 6) {
			cout << "Your password is tai duan le.\n";
			continue;
		}
		bool legal = true, dig = false, alp = false;
		for (auto e : s) {
			auto check = [&](char c) {
				if (isdigit(c)) dig = true;
				if (isalpha(c)) alp = true;
				if (isdigit(c) || isalpha(c) || c == '.') return true;
				return false;
			};
			legal &= check(e);
		}
		if (!legal) {
			cout << "Your password is tai luan le.\n";
			continue;
		}
		if (dig && !alp) {
			cout << "Your password needs zi mu.\n";
			continue;
		}
		if (!dig && alp) {
			cout << "Your password needs shu zi.\n";
			continue;
		}
		cout << "Your password is wan mei.\n";
	}
	return 0;
} 	
