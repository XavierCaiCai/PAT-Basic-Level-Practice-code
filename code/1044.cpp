#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	vector<string> revmp1 = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", 
							"aug", "sep", "oct", "nov", "dec"};
	vector<string> revmp2 = {"tret", "tam", "hel", "maa", "huh", "tou", "kes", "hei", 
							"elo", "syy", "lok", "mer", "jou"};
	map<string, int> mp1, mp2;
	mp1["tret"] = 0; mp1["jan"] = 1; mp1["feb"] = 2; mp1["mar"] = 3; mp1["apr"] = 4; mp1["may"] = 5; mp1["jun"] = 6; 
	mp1["jly"] = 7; mp1["aug"] = 8; mp1["sep"] = 9; mp1["oct"] = 10; mp1["nov"] = 11; mp1["dec"] = 12;
	mp2["tam"] = 1; mp2["hel"] = 2; mp2["maa"] = 3; mp2["huh"] = 4; mp2["tou"] = 5; mp2["kes"] = 6; 
	mp2["hei"] = 7; mp2["elo"] = 8; mp2["syy"] = 9; mp2["lok"] = 10; mp2["mer"] = 11; mp2["jou"] = 12;
	int n;
	cin >> n;
	cin.ignore(1);
	for (int i = 0; i < n; ++i) {
		string s;
		getline(cin, s);
		if (isdigit(s[0])) {
			int num = stoi(s);
			if (num > 12 && num % 13 != 0) 
				cout << revmp2[num / 13] << ' ' << revmp1[num % 13] << '\n';
			else if (num > 12 && num % 13 == 0)
				cout << revmp2[num / 13] << '\n';
			else
				cout << revmp1[num % 13] << '\n';
		}
		else {
			if (s.size() > 4) 
				cout << mp2[s.substr(0, 3)] * 13 + mp1[s.substr(4, 3)] << '\n';
			else if (mp2.find(s.substr(0, 3)) != mp2.end()) 
				cout << mp2[s.substr(0, 3)]* 13 << '\n';
			else 
				cout << mp1[s.substr(0, 3)] << '\n';
		}
	}
	return 0;
} 
