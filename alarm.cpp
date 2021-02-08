#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
	ull t, a, b, c, d; cin >> t;
	while(t--) {
		cin >> a >> b >> c >> d;
		if (a <= b) {
			cout << b << "\n";
		} else if (c <= d) {
			cout << "-1\n";
		} else {
			ull ans = b; a -= b;
			while (a > 0) {
				a -= (c - d);
				ans += d;
			}
			cout << ans << "\n";
		}
	}
}