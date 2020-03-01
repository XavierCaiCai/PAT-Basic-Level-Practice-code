#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	vector<int> quan = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
	vector<char> jiao = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
	int n;
	cin >> n;
	vector<string> wrong;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		bool flag = true;
		int sum = 0;
		for (int i = 0; i < 17; ++i) {
			if (s[i] < '0' || s[i] > '9') {
				flag = false;
				break;
			}
			sum += quan[i] * (s[i] - '0');
		}
		sum %= 11;
		if (jiao[sum] != s[17]) flag = false;
		if (!flag) wrong.push_back(s);
	}
	if (wrong.size() == 0) {
		cout << "All passed\n";
	}
	else {
		for (auto e : wrong)
			cout << e << '\n';
	}
	return 0;
} 	
