#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string a, b;
	getline(cin, a);
	getline(cin, b);
	vector<bool> out(b.size(), true);
	for (int i = 0; i < a.size(); ++i) {
		for (int j = 0; j < b.size(); ++j) {
			if (a[i] == b[j]) out[j] = false;
			if (a[i] >= 'a' && a[i] <= 'z' && a[i] == b[j] + 32)
				out[j] = false;
			if (a[i] >= 'A' && a[i] <= 'Z' && a[i] == b[j] - 32)
				out[j] = false;
			if (a[i] == '+' && (b[j] >= 'A' && b[j] <= 'Z'))
				out[j] = false;
		}
	}
	for (int i = 0; i < b.size(); ++i) 
		if (out[i]) cout << b[i];
	cout << '\n';
	return 0;
} 	
