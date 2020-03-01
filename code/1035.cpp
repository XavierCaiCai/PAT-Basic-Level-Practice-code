#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	vector<int> init(n);
	for (int& e : init) cin >> e;
	vector<int> cent(n);
	for (int& e : cent) cin >> e;
	vector<int> tmp = init;
	bool flag = false;
	for (int i = 1; i < n; ++i) {
		for (int j = i; j > 0; --j)  {
			if (tmp[j] < tmp[j - 1]) 
				swap(tmp[j], tmp[j - 1]);
			else 
				break;
		}
		if (flag) {
			for (int j = 0; j < n; ++j) 
				cout << tmp[j] << (j == n - 1 ? '\n' : ' ');
			break;
		}
		if (tmp == cent) {
			cout << "Insertion Sort\n";
			flag = true;
		}
	}
	tmp = init;
	flag = false;
	for (int i = 1; ; ++i) {
		for (int j = 0, seg = 1 << i; j < n; j += seg) {
			if (j + seg <= n) 
				sort(tmp.begin() + j, tmp.begin() + j + seg);
			else 
				sort(tmp.begin() + j, tmp.end());
		}
		if (flag) {
			for (int j = 0; j < n; ++j) 
				cout << tmp[j] << (j == n - 1 ? '\n' : ' ');
			break;
		}
		if (tmp == cent) {
			cout << "Merge Sort\n";
			flag = true;
		}
        if ((1 << i) >= n) break;
	}
	return 0;
} 
