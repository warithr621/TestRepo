#include <bits/stdc++.h>
using namespace std;

int main() {
	typedef unsigned long long ull;
	ull n; cin >> n; cout << n;
	ull x = n;	
	while (x != 1) {
		if (x % 2 == 0) {
			x /= 2;
			cout << " " << x;
		} else {
			x = 3*x + 1;
			cout << " " << x;
		}
	}	 
}