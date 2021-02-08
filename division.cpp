#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a, one, two; cin >> t;
	while (t--) {
		one = 0; two = 0;
		cin >> n;
		while (n--) {
			cin >> a;
			if (a == 1) {
				one++;
			} else {
				two++;
			}
		}
		
		if ((one + 2*two) % 2 == 1) {
			cout << "NO\n";
		} else {
			int sum = (one + 2*two)/2;
			if (sum % 2 == 0 || (sum % 2 == 1 && one != 0)) {
				cout << "YES\n";
			} else {
				cout << "NO\n";
			}
		}
	}
}