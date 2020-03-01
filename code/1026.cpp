#include <bits/stdc++.h>
using namespace std;
int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(nullptr);
	//cout.tie(nullptr);
	int c1, c2;
	scanf("%d %d", &c1, &c2);
	int dis = c2 - c1;
	int t = (int)( dis / 100.0 + 0.5);
	printf("%02d:%02d:%02d\n", t / 3600, t % 3600 / 60, t % 60);
	return 0;
} 	
