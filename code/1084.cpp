#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string d;
	int n;
	cin >> d >> n;
	for (int i = 1; i < n; ++i) {
		string tmp = "";
		for (int j = 0, k = 0; j < d.size(); j = k) {
			while (k < d.size() && d[k] == d[j]) k++;
			tmp.push_back(d[j]);
			tmp.push_back(k - j + '0');
		}
		d = tmp;
	}
	cout << d << '\n';
	return 0;
} 
