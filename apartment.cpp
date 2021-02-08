#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n; cin >> t;
	while(t--) {
		cin >> n;
		if (n % 1111 == 0) {
			cout << 10 * n / 1111 << "\n";
		} else if (n % 111 == 0) {
			cout << 10 * (n-111) / 111 + 6 << "\n";
		} else if (n % 11 == 0) {
			cout << 10 * (n-11) / 11 + 3 << "\n";
		} else {
			cout << 10 * (n-1) + 1 << "\n";
		}
	}
}