#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string a, b;
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	while (a.size() < b.size()) a.push_back('0');
	while (a.size() > b.size()) b.push_back('0');
	string ans = "";
	for (int i = 0; i < b.size() && i < a.size(); ++i) {
		if (i & 1) {
			int sum = b[i] - '0' - a[i] + '0';
			while (sum < 0) sum += 10;
			if (sum < 10) ans.push_back(sum + '0');
			if (sum == 10) ans.push_back('J');
			if (sum == 11) ans.push_back('Q');
			if (sum == 12) ans.push_back('K');
		}
		else {
			int sum = a[i] - '0' + b[i] - '0';
			sum %= 13;
			if (sum < 10) ans.push_back(sum + '0');
			if (sum == 10) ans.push_back('J');
			if (sum == 11) ans.push_back('Q');
			if (sum == 12) ans.push_back('K');
		}
	}
	while (ans.back() == '0') ans.pop_back();
	if (ans.size() == 0) ans = "0";
	reverse(ans.begin(), ans.end());
	cout << ans << '\n';
	return 0;
} 
