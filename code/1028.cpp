#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	vector<pair<string, string>> person;
	string lo = "18140906", hi = "20140906";
	for (int i = 0; i < n; ++i) {
		string name, d;
		cin >> name >> d;
		string day = d.substr(0, 4) + d.substr(5, 2) + d.substr(8, 2);
		if (day < lo || day > hi) continue;
		person.emplace_back(day, name);
	}
	if (person.size() == 0) {
		cout << "0\n";
		exit(0);
	}
	sort(person.begin(), person.end());
	cout << person.size() << ' ';
	cout << person[0].second << ' ';
	cout << person[person.size() - 1].second << '\n';
	return 0;
} 
