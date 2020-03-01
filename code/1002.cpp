#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s;
	cin >> s;
	int sum = 0;
	for (int i = 0; i < s.size(); ++i) 
		sum += s[i] - '0';
	vector<string> py = {"ling", "yi", "er", "san", "si", 
						"wu", "liu", "qi", "ba", "jiu"};
	vector<string> ans;
	while (sum) {
		ans.push_back(py[sum % 10]);
		sum /= 10;
	}
	reverse(ans.begin(), ans.end());
	for (int i = 0; i < ans.size(); ++i) 
		cout << ans[i] << (i == ans.size() - 1 ? '\n' : ' ');
	return 0;
} 
