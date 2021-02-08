#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
	int t, n; string s; cin >> t;
	while(t--) {
		cin >> s; n = s.length();
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				if (s[i] != 'a') {
					cout << 'a';
				} else {
					cout << 'b';
				}
			} else {
				if (s[i] != 'z') {
					cout << 'z';
				} else {
					cout << 'y';
				}
			}
		}
		cout << "\n";
	}	
}