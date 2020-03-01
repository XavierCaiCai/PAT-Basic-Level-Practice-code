#include <bits/stdc++.h>
using namespace std;
struct node {
	string s;
	int sc;
	char lv;
	int tid, t, sid;
	node() {}
	node(string _s, int _sc) : s(_s), sc(_sc) {
		lv = s[0];
		tid = stoi(_s.substr(1, 3));
		t = stoi(_s.substr(4, 6));
		sid = stoi(_s.substr(10, 3));
	}
};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	vector<node> a(n);
	for (int i = 0; i < n; ++i) {
		string s;
		int sc;
		cin >> s >> sc;
		a[i] = node(s, sc);
	}
	sort(a.begin(), a.end(), [](node lhs, node rhs) {
		if (lhs.sc == rhs.sc) return lhs.s < rhs.s;
		return lhs.sc > rhs.sc;
	});
	vector<node> copy_a = a;
	sort(copy_a.begin(), copy_a.end(), [](node lhs, node rhs) {
		return lhs.tid > rhs.tid;
	});
	for (int cas = 1; cas <= m; ++cas) {
		int type;
		cin >> type;
		if (type == 1) {
			char lv;
			cin >> lv;
			cout << "Case " << cas << ": " << type << ' ' << lv << '\n';
			vector<node> tmp;
			for (auto e : a)
				if (e.lv == lv) tmp.push_back(e);
			if (tmp.size() == 0) {cout << "NA\n"; continue;}
			for (auto e : tmp)
				cout << e.s << ' '<< e.sc << '\n';
		}
		if (type == 2) {
			int tid;
			cin >> tid;
			cout << "Case " << cas << ": " << type << ' ' << tid << '\n';
			int sum = 0;
			vector<node> tmp;
			for (auto e : a)
				if (e.tid == tid) sum += e.sc, tmp.push_back(e);
			if (tmp.size() == 0) {cout << "NA\n"; continue;}
			cout << tmp.size() << ' ' << sum << '\n';
		}
		if (type == 3) {
			int t;
			cin >> t;
			cout << "Case " << cas << ": " << type << ' ';
			cout << setw(6) << setfill('0') << t << '\n';
			vector<node> tmp;
			for (auto e : copy_a)
				if (e.t == t) tmp.push_back(e);
			if (tmp.size() == 0) {cout << "NA\n"; continue;}
			vector<pair<int, int>> ans;
			for (int i = 0, j = i; i < tmp.size(); i = j) {
				while (j < tmp.size() && tmp[j].tid == tmp[i].tid) j++;
				ans.push_back({i - j, tmp[i].tid});
			}
			sort(ans.begin(), ans.end());
			for (auto e : ans) 
				cout << e.second << ' ' << -e.first << '\n';
		}
	}
	return 0;
} 
