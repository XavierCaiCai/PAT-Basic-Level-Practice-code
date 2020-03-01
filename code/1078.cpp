#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	char c;
	cin >> c;
	cin.ignore(1);
	string s;
	getline(cin, s);
	if (c == 'C') {
		for (int i = 0, j = 0; i < s.size(); i = j) {
			while (j < s.size() && s[j] == s[i]) j++;
			if (j - i == 1)
				cout << s[i];
			else 
				cout << j - i << s[i];
		}
	}
	else {
		for (int i = 0; i < s.size(); ++i) {
			if (!isdigit(s[i])) {
				cout << s[i];
				continue;
			}
			int num = 0, j = i;
			while (isdigit(s[j])) 
				num = num * 10 + s[j++] - '0';
			for (int k = 0; k < num; ++k) 
				cout << s[j];
			i = j;
		}
	}
	return 0;
} 
