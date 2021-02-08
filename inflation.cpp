#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
	ull t, n, k; cin >> t;
	while(t--) {
		cin >> n >> k; vector<double> p(n), thonk; ull ans = 0;
		for (int i = 0; i < n; i++) cin >> p[i];
		
		for (int i = 1; i < p.size(); i++) {
			double sum = 0;
			for (int j = i; j >= 0; j--) {
				sum += p[j];
			}
			if (p[i] / sum > k / 100) thonk.push_back(i);
		}
		
		for (int i = 0; i < thonk.size(); i++) {
			
		}
		
		cout << ans << "\n";
	}
}