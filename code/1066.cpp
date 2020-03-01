#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	int A, B, d;
	cin >> A >> B >> d;
	vector<vector<int>> a(n, vector<int>(m));
	for (int i = 0; i < n; ++i) 
		for (int j = 0; j < m; ++j) {
			cin >> a[i][j];
			if (a[i][j] >= A && a[i][j] <= B) a[i][j] = d;
		}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << setw(3) << setfill('0') << a[i][j];
			cout << (j == m - 1 ? '\n' : ' ');
		}
	}
	return 0;
} 	
