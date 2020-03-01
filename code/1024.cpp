#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	deque<char> dek;
	string exp;
	cin >> exp;
	if (exp[0] == '-') cout << exp[0];
	int n;
	for (int i = 1; i < exp.size(); ++i) {
		if (exp[i] == 'E') {
			n = stoi(exp.substr(i + 1, exp.size() - i - 1));
			break;
		}
		dek.push_back(exp[i]);
	}
    if (n > 0) {
        int number = dek.size() - 2;
        if (n < number) {
            dek.insert(dek.begin() + 1 + n + 1, '.');
            dek.erase(dek.begin() + 1);
        }
        else {
            for (int i = 0; i < n - number; i++)
                dek.push_back('0');
            dek.erase(dek.begin() + 1);
        }
    }
    else {
        dek.erase(dek.begin() + 1);
        for (int i = 0; i < -n; i++)
            dek.push_front('0');
        dek.insert(dek.begin() + 1,'.');
    }
    for (int i = 0; i < dek.size(); i++) 
        cout << dek[i];
	return 0;
} 	
