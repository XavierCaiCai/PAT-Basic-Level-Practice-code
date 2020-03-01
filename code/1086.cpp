#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int a, b;
	cin >> a >> b;
	string s = to_string(a * b);
	while (s[s.size() - 1] == '0') s.pop_back();
	reverse(s.begin(), s.end());
	cout << s << '\n';
	return 0;
} 	
