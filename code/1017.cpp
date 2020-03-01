#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string a;
	int b;
	cin >> a >> b;
	string ans = "";
	int le = 0;
	for (int i = 0; i < a.size(); ++i) {
		le = le * 10 + a[i] - '0';
		ans.push_back(le / b + '0');
		le %= b;
	}
	reverse(ans.begin(), ans.end());
	while (ans[ans.size() - 1] == '0') ans.pop_back();
	reverse(ans.begin(), ans.end());
	if (ans.size() == 0) ans = "0";
	cout << ans << ' ' << le << '\n';
	return 0;
} 	
