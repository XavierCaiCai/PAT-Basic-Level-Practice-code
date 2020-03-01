#include <bits/stdc++.h>
using namespace std;
int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(nullptr);
	//cout.tie(nullptr);
	int64_t n1, n2, m1, m2, k;
	scanf("%lld/%lld %lld/%lld %lld", &n1, &m1, &n2, &m2, &k);
	n1 *= k * m2;
	n2 *= k * m1;
	if (n1 > n2) swap(n1, n2);
	vector<int64_t> ans;
	int64_t jump = m1 * m2;
	for (int64_t i = n1 + (jump - n1 % jump); i < n2; i += jump) {
		if (__gcd(i, k * jump) == jump) {
			ans.push_back(i / jump);
		}
	}
	for (int i = 0; i < ans.size(); ++i) 
		printf("%lld/%lld%c", ans[i], k, (i == ans.size() - 1 ? '\n' : ' '));
	return 0;
} 
