#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	vector<int> freq(260);
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); ++i) {
		if (!('a' <= s[i] && s[i] <= 'z') && !('A' <= s[i] && s[i] <= 'Z')) continue;
		if ('A' <= s[i] && s[i] <= 'Z') s[i] -= 'A' - 'a';
		freq[s[i]]++;
	}
	int pos = max_element(freq.begin(), freq.end()) - freq.begin();
	cout << static_cast<char>(pos) << ' ' << freq[pos] << '\n';
	return 0;
} 
