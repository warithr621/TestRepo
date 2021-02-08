#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b; cin >> t;
	while(t--) {
		cin >> a >> b;
		if (a / b >= 2 || b / a >= 2) {
			cout << max(a,b) * max(a,b) << "\n";
		} else {
			cout << min(a,b) * min(a,b) * 4 << "\n";
		}
	}
}