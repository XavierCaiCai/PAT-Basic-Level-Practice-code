#include <bits/stdc++.h>
using namespace std;
struct cake {
	double num, val;
};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int a, b, d;
	cin >> a >> b >> d;
	int sum = a + b;
	vector<int> ans;
	while (sum) {
		ans.push_back(sum % d);
		sum /= d;
	}
	if (ans.size() == 0) ans.push_back(0);
	reverse(ans.begin(), ans.end());
	for (auto e : ans) cout << e;
	cout << '\n';
	return 0;
} 	
