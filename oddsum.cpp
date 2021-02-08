#include <bits/stdc++.h>
using namespace std;

int main() {
	typedef unsigned long long ull;
	ull t, n, k; cin >> t;
	while(t--) {
		cin >> n >> k;
		if ((n - k) % 2 == 0 && n >= k*(k+1)/2) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}