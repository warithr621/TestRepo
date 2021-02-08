#include <bits/stdc++.h>
using namespace std;

int main() {
	typedef unsigned long long ull;
	ull a, b, ans = 0; cin >> a >> b;
	while (a / b >= b) {
		ans += a;
		a /= b;
	}
	cout << ans << "\n";	
}