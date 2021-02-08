#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
	ull t, n; cin >> t;
	while(t--) {
		cin >> n; ull ans = 0;
		if (n % 3 != 0 && n != 1) {
			cout << "-1\n";
		} else {
			while (n != 1 && n % 3 != 0) {
				if (n % 6 == 0) {
					n /= 6;
				} else {
					n *= 2;
				}
				ans++;
			}
		}
		cout << ans << "\n";
	}
}