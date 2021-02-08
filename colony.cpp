#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
	int t, n, k; cin >> t;
	while(t--) {
		cin >> n >> k; vector<int> h(n); int ans = 0;
		for (int i = 0; i < n; i++) cin >> h[i];
		while(k--) {
			int c = 0;
			while(h[c] >= h[c+1] && c < n - 1) {
				c++;
			}
			if (c = n - 1) {
				ans = -1;
			} else {
				if (ans != -1) {
					ans = c+1;
				}
				h[c]++;
			}
		}
		cout << ans << "\n";
	}
}