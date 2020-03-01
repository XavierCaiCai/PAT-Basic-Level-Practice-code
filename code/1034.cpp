#include <bits/stdc++.h>
using namespace std;
int main() {
	int64_t a1, a2, b1, b2;
	scanf("%lld/%lld %lld/%lld",&a1, &b1, &a2, &b2);
	auto solve = [](int64_t a, int64_t b) -> string {
		if (b == 0) return "Inf";
		if (a == 0) return "0";
		if (b < 0) {b *= -1; a *= -1;}
		int64_t gcd = __gcd(abs(a), b);
		a /= gcd;
		b /= gcd;
		int64_t z = abs(a) / b, fz = abs(a) % b;
		string res = "";
		if (a < 0) res += "(-";
		if (z != 0) res += to_string(z);
		if (z != 0 && fz != 0) res += " ";
		if (fz != 0) {
			res += to_string(fz);
			res += "/";
			res += to_string(b);
		}
		if (a < 0) res += ")";
		return res;
	};
	printf("%s + %s = %s\n", solve(a1, b1).c_str(), solve(a2, b2).c_str(), solve(a1 * b2 + a2 * b1, b1 * b2).c_str());
	printf("%s - %s = %s\n", solve(a1, b1).c_str(), solve(a2, b2).c_str(), solve(a1 * b2 - a2 * b1, b1 * b2).c_str());
	printf("%s * %s = %s\n", solve(a1, b1).c_str(), solve(a2, b2).c_str(), solve(a1 * a2, b1 * b2).c_str());
	printf("%s / %s = %s\n", solve(a1, b1).c_str(), solve(a2, b2).c_str(), solve(a1 * b2, a2 * b1).c_str());
	return 0;
} 
