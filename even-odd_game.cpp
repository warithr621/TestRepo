#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
	int t, n; cin >> t;
	while(t--) {
		cin >> n; vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a.rbegin(), a.rend()); ull alice = 0, bob = 0;
		
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				if (a[i] % 2 == 0) {
					alice += a[i];
				}
			}
			
			if (i % 2 == 1) {
				if (a[i] % 2 == 1) {
					bob += a[i];
				}
			}
		}
		
		if (alice > bob) {
			cout << "Alice\n";
		} else if (bob > alice) {
			cout << "Bob\n";
		} else {
			cout << "Tie\n";
		}
	}
}