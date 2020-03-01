#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	auto to_db = [](string s) -> double {
		const double FFF = 2333;
		if (s.size() > 7) return FFF;
		if (s.size() == 1 && s[0] == '-') return FFF;
		int dot_cnt = 0, dot_pos = -1;
		for (int i = (s[0] == '-' ? 1 : 0); i < s.size(); ++i) {
			if (isdigit(s[i])) continue;
			if (s[i] == '.') {dot_cnt++; dot_pos = i; continue;}
			return FFF;
		}
		if (dot_cnt > 1) return FFF;
		if (dot_cnt == 1 && (int)s.size() - dot_pos - 1 > 2) return FFF;
		double res = stof(s);
		if (fabs(res) > 1000) return FFF;
		return res;
	};
	double sum = 0;
	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		double res = to_db(s);
		if (res == 2333) {
			cout << "ERROR: " << s << " is not a legal number\n";
			continue;
		}
		sum += res;
		cnt++;
	}
	cout << "The average of " << cnt;
	if (cnt == 0)
		cout << " numbers is Undefined\n";
	else if (cnt == 1)
		cout << " number is " << fixed << setprecision(2) << sum / cnt<< '\n';
	else 
		cout << " numbers is " << fixed << setprecision(2) << sum / cnt << '\n';
	return 0;
} 
