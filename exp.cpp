#include <bits/stdc++.h>
using namespace std;

int main() {
	int max; int primes;
	int bad = 1;
	cin >> max >> primes;
	vector<int> p(primes);
	for (int i = 0; i < primes; i++) cin >> p[i];
	for (int i = 0; i < primes.size(); i++) {
		bad = bad * (p[i] - 1) / (p[i]);
	}
	cout << max - (max * bad) << "\n";
}