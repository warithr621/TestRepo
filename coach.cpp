#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n; cin >> t;
	while(t--) {
		cin >> n;
		vector<int> s(n);
		for (int i = 0; i < n; i++) cin >> s[i];
		sort(s.begin(), s.end());
		
		int ans = INT_MAX;
		for (int i = 0; i < n-1; i++) {
			if (ans > s[i+1] - s[i]) {
				ans = s[i+1] - s[i];
			}
		}

		cout << ans << "\n";
	}
}