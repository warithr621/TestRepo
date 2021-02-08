#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main() {
	ull t, n; cin >> t;
	while(t--) {
		cin >> n;
		if (n < 2020) {
			cout << "NO\n";
		} else {
			ull twenty = 0;
			while (n > 2019) {
				n -= 2020;
				twenty++;
			}
			if (twenty >= n) {
				cout << "YES\n";
			} else {
				cout << "NO\n";
			}
		}
	}
}