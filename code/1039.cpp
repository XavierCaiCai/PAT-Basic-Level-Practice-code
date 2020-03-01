#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string a, b;
	cin >> a >> b;
	vector<int> cnta(260), cntb(260);
	for (int i = 0; i < a.size(); ++i)
		cnta[a[i]]++;
	for (int i = 0; i < b.size(); ++i)
		cntb[b[i]]++;
	int ans = 0;
	for (int i = 0; i < 260; ++i) {
		if (cntb[i] == 0) continue;
		if (cntb[i] > cnta[i]) ans += cntb[i] - cnta[i];
	}
	if (ans) {
		cout << "No " << ans << '\n';
	}
	else {
		cout << "Yes " << a.size() - b.size() << '\n';
	}
	return 0;
} 
