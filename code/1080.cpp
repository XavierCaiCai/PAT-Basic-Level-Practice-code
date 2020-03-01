#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int p, m, n;
	cin >> p >> m >> n;
	map<string, tuple<int, int, int>> mp;
	map<string, tuple<bool, bool, bool>> vis;
	for (int i = 0; i < p; ++i) {
		string id;
		int score;
		cin >> id >> score;
		get<0>(mp[id]) = score;
		get<0>(vis[id]) = true;
	}
	for (int i = 0; i < m; ++i) {
		string id;
		int score;
		cin >> id >> score;
		get<1>(mp[id]) = score;
		get<1>(vis[id]) = true;
	}
	for (int i = 0; i < n; ++i) {
		string id;
		int score;
		cin >> id >> score;
		get<2>(mp[id]) = score;
		get<2>(vis[id]) = true;
	}
	vector<tuple<int, string, int, int, int>> stu;
	for (auto e : mp) {
		string id;
		id = e.first;
		int a, b, c;
		tie(a, b, c) = e.second;
		bool va, vb, vc;
		tie(va, vb, vc) = vis[id];
		if (!va || !vc || a < 200) continue;
		double total = c;
		if (vb) {
			if (b > c) total = 0.4 * b + 0.6 * c;
		}
		else {
			b = -1;
		} 
		total = (int)(total + 0.5);
		if (total >= 60) stu.emplace_back(-total, id, a, b, c);
	}
	sort(stu.begin(), stu.end());
	for (auto e : stu) {
		string id;
		int total, a, b, c;
		tie(total, id, a, b, c) = e;
		cout << id << ' ' << a << ' ' << b << ' ' << c << ' ' << -total << '\n';
	}
	return 0;
} 
