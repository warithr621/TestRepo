#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n; vector<int> a;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		a.clear();
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			a.push_back(x);
		}
		string solve = "YES";
		sort(a.begin(), a.end());
		for (int i : a) {
			if ((i - a[a.end()]) % 2 == 1) {
				solve = "NO";
			}
		}
		cout << solve << "\n";
	}
}