#include <bits/stdc++.h>
using namespace std;
int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(nullptr);
	//cout.tie(nullptr);
	int n;
	cin >> n;
	const int MAXN = 1005;
	vector<int> grade(MAXN);
	for (int i = 0; i < n; ++i) {
		int a, b, c;
		scanf("%d-%d %d", &a, &b, &c);
		grade[a] += c;
	}
	int pos = max_element(grade.begin(), grade.end()) - grade.begin();
	printf("%d %d\n", pos, grade[pos]);
	return 0;
} 
