#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string jz, a, b;
	cin >> jz >> a >> b;
	reverse(jz.begin(), jz.end());
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	vector<int> sum;
	int i = 0, j = 0;
	while (i < a.size() && j < b.size())
		sum.push_back(a[i++] - '0' + b[j++] - '0');
	while (i < a.size() )
		sum.push_back(a[i++] - '0');
	while (j < b.size())
		sum.push_back(b[j++] - '0');
	for (int i = 0; i < sum.size(); ++i) {
		int mod = jz[i] - '0';
		if (mod == 0) mod = 10;
		int add = sum[i] / mod;
		sum[i] %= mod;
		if (!add) continue;
		if (i + 1 < sum.size())
			sum[i + 1] += add;
		else 
			sum.push_back(add);
	}
	string ans;
	for (auto e : sum) ans.push_back(e + '0');
	while (ans.back() == '0') ans.pop_back();
	if (ans.size() == 0) ans = "0";
	reverse(ans.begin(), ans.end());
	cout << ans << '\n';
	return 0;
} 
