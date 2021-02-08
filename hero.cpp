#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
	int t, A, B, n; cin >> t;
	while(t--) {
		cin >> A >> B >> n; ull ans = 0;
		vector<ull> a(n), b(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++) cin >> b[i];
		
		if (n = 1) {
			ull num = (b[0] + A - 1) / A;
			if (B > a[0] * (num-1)) {
				cout << "YES\n";
			} else {
				cout << "NO\n";
			}
		} else {
			for (int i = 0; i < n - 1; i++) {
				ull num = (b[i] + A) / A;
				ans += num * a[i];
			}
			ull u = (b[n - 1] + A) / A;
			if (B > a[0] * (u-1) + ans) {
				cout << "YES\n";
			} else {
				cout << "NO\n";
			}
		}
	}	
}