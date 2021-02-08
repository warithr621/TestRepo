#include <bits/stdc++.h>
using namespace std;

int main() {
	typedef unsigned long long ull;
	ull t, a; cin >> t;
	while (t--) {
		cin >> a;
		if (360 % (180-a) == 0) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}	
}