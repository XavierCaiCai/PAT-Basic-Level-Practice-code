#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	vector<char> revmp = {'B', 'C', 'J'};
	map<char, int> mp; mp['B'] = 0; mp['C'] = 1; mp['J'] = 2;
	int n;
	cin >> n;
	vector<int> ans1(3), ans2(3);// 0 win, 1 draw, 2 lose
	vector<int> num1(3), num2(3);// 0 B NUM, 1 C NUM, 2 J NUM
	vector<int> win1(3), win2(3);// 0 USE B WIN, 1 ...
	for (int i = 0; i < n; ++i) {
		char a, b;
		cin >> a >> b;
		num1[mp[a]]++;
		num2[mp[b]]++;
		if (a == b) ans1[1]++, ans2[1]++;
		if ((mp[a] + 1) % 3 == mp[b]) win1[mp[a]]++, ans1[0]++, ans2[2]++;
		if ((mp[b] + 1) % 3 == mp[a]) win2[mp[b]]++, ans1[2]++, ans2[0]++; 
	}
	cout << ans1[0] << ' ' << ans1[1] << ' ' << ans1[2] << '\n';
	cout << ans2[0] << ' ' << ans2[1] << ' ' << ans2[2] << '\n';
	cout << revmp[max_element(win1.begin(), win1.end()) - win1.begin()] << ' ';
	cout << revmp[max_element(win2.begin(), win2.end()) - win2.begin()] << '\n';
	return 0;
} 	
