#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s;
	cin >> s;
	while (s.size() < 4) s.push_back('0');
	do {
		string s1 = s, s2 = s;
		sort(s1.begin(), s1.end(), greater<char>());
		sort(s2.begin(), s2.end());
		cout << setw(4) << setfill('0') << s1 << " - ";
		cout << setw(4) << setfill('0') << s2 << " = ";
		cout << setw(4) << setfill('0') << stoi(s1) - stoi(s2) << '\n';
		s = to_string(stoi(s1) - stoi(s2));
		while (s.size() < 4) s.push_back('0');
	} while (s != "0000" && s != "6174");
	return 0;
} 	
