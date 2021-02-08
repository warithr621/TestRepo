#include <bits/stdc++.h>
using namespace std;

int main() {
	long long max; long long k;
	cin >> max >> k;	
	if (k <= (max+1)/2) {
		cout << 2*k-1 << "\n";
	} else {
		cout << 2 * (k - (max+1)/2) << "\n";
	}
}