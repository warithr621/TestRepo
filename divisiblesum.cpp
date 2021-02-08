#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
	ull t, n, k; cin >> t;
	while(t--) {
		cin >> n >> k; ull a = k;
		while (k < n) k += a;
		ull count = 1;
		while (k > n) {
			count++;
			k -= n;
		}
		cout << count << "\n";
	}
}