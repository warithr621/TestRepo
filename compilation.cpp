#include <bits/stdc++.h>
using namespace std;

int main() {
	typedef unsigned long long ull;
	ull n, a = 0, b = 0, c = 0, w; cin >> n;
	for (ull i = 0; i < n; i++) {
		cin >> w;
		a += w;
	}
	for (ull i = 0; i < n-1; i++) {
		cin >> w;
		b += w;
	} 
	for (ull i = 0; i < n-2; i++) {
		cin >> w;
		c += w;
	}
	
	cout << a-b << "\n" << b-c << "\n";
}