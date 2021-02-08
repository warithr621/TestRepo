#include <bits/stdc++.h>
using namespace std;

int main() {
	typedef unsigned long long ull;
	ull n, k, input, sum = 694201337, ans, counter; vector<int> h; cin >> n >> k;
	while(n--) {
		cin >> input; h.push_back(input);
	}
	
	for (int i = 1; i <= (n - k); i++) {
		ans = 0;
		for (int j = i; i <= k; i++) {
			ans += h[i-1];
		}
		if (ans < sum) counter = i-1;
	}
	cout << counter << "\n";
}