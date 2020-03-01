#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s;
	cin >> s;
	auto check = [](string init) {
		string rev = init;
		reverse(rev.begin(), rev.end());
		return (rev == init);
	};
	if (check(s)) {
		cout << s << " is a palindromic number.\n";
		exit(0);
	}
	bool flag = false;
	for (int i = 0; i < 10 && !flag; ++i) {
		string s1 = s, s2 = s;
		reverse(s2.begin(), s2.end());
		auto cal_sum = [](string a, string b) {
			vector<int> sum;
			for (int i = 0; i < a.size(); ++i)  
				sum.push_back(a[i] - '0' + b[i] - '0');
			for (int i = 0; i < sum.size(); ++i) {
				int add = sum[i] / 10;
				sum[i] %= 10;
				if (!add) continue;
				if (i + 1 < sum.size()) 
					sum[i + 1] += add;
				else 
					sum.push_back(add);
			}
			string res = "";
			for (auto e : sum) res += (e + '0');
			while(res.back() == '0') res.pop_back();
			reverse(res.begin(), res.end());
			return res;
		};
		string sum = cal_sum(s1, s2);
		cout << s1 << " + " << s2 << " = " << sum << '\n';
		flag = check(sum);
		s = sum;
	}
	if (!flag) 
		cout << "Not found in 10 iterations.\n";
	else 
		cout << s << " is a palindromic number.\n";
	return 0;
} 
