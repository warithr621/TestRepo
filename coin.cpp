#include <bits/stdc++.h>
using namespace std;

int main() {
	typedef unsigned long long ull;
	ull t, a, b; cin >> t;
	while (t--) {
		cin >> a >> b;
		if ( (a == 0 && b != 0) || (a != 0 && b == 0) ) {
			cout << "NO\n";
		} else {
			a = a % 3; b = b % 3;
			if( (a == 0 && b == 0) || (a == 2 && b == 1) || (a == 1 && b == 2) ) {
				cout << "YES\n";
			} else {
				cout << "NO\n";
			}
		}
	}
}