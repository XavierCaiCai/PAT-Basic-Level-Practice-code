#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 1, x; i <= n; ++i) {
    	cin >> x;
    	mp[abs(x - i)]++;
	}
	for (auto it = mp.rbegin(); it != mp.rend(); ++it) {
		if ((*it).second == 1) continue;
		cout << (*it).first << ' ' << (*it).second << '\n';
	}
	return 0;
} 
