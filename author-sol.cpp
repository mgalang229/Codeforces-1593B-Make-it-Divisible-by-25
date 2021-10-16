#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		int n = (int) s.size();
		int mn = INT_MAX;
		// find two digits which are 25, 50, 75, 00 (divisibility rule of 25)
		// remove the digits between and the digits after the chosen two digits
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				int num = 10 * (s[i] - '0') + (s[j] - '0');
				if (num % 25 == 0) {
					mn = min(mn, (j - i - 1) + (n - 1 - j));
				}
			}
		}
		cout << mn << '\n';
	}
	return 0;
}
