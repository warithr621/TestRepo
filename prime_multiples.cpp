#include <bits/stdc++.h>
using namespace std;

int main() {
	int max; int primes;
	double bad = 1;
	cin >> max >> primes;
	vector<int> p(primes);
	for (int i = 0; i < primes; i++) cin >> p[i];
	for (int j = 0; j < primes; j++) {
		bad = bad * (p[j] - 1) / (p[j]);
	}
	cout << max - (max * bad) << "\n";
}