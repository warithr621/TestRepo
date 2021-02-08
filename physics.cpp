#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x = 0, y = 0, z = 0, a; cin >> n;
	while(n--) {
		cin >> a; x += a;
		cin >> a; y += a;
		cin >> a; z += a;
	}
	if (x == 0 && y == 0 && z == 0) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}