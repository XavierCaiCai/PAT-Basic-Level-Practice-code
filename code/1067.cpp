#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string right;
	int n;
	cin >> right >> n;
	cin.ignore(1);
	string s;
	int cnt = 0;
	while (getline(cin, s)) {
		if (s == "#") break;
		if (s == right) {
			cout << "Welcome in\n";
			break;
		}
		cout << "Wrong password: " << s << '\n';
		cnt++;
		if (cnt == n) {
			cout << "Account locked\n";
			break;
		}
	}
	return 0;
} 
