#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s;
	cin >> s;
	vector<char> tmp = {'P', 'A', 'T', 'e', 's', 't'};
	vector<int> cnt(6);
	for (int i = 0; i < s.size(); ++i) {
		for (int j = 0; j < 6; ++j) {
			if (s[i] == tmp[j]) cnt[j]++;
		}
	}
	int maxn = *max_element(cnt.begin(), cnt.end());
	for (int i = 0; i < maxn; ++i) {
		for (int j = 0; j < 6; ++j) {
			if (cnt[j] == 0) continue;
			cout << tmp[j];
			cnt[j]--;
		}
	}
	cout << '\n';
	return 0;
} 
