#include <bits/stdc++.h>
using namespace std;

int main() {
	typedef unsigned long long ull;
	string p, ans = "NO"; cin >> p; 
	for (int i = 0; i < p.length(); i++) {
		if (p[i] == 72 || p[i] == 81 || p[i] == 57) {
			ans = "YES";
		}
	}
	cout << ans << "\n"; 
}