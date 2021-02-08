#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q;
	cin >> n;  vector<int> x(n);
	for (int i = 0; i < n; i++) cin >> x[i];
	cin >> q;  vector<int> m(q);
	for (int i = 0; i < q; i++) cin >> m[i];
	sort(m.begin(), m.end());
	for (int i = 0; i < m.size(); i++) {
		int ans = 0, j = 0;
		while(m[i] >= x[j] && j < x.size()) {
			ans++; j++;
		}
		cout << ans << "\n";
	}
}