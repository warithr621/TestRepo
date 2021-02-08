#include <bits/stdc++.h>
using namespace std;

bool allA(string o) {
	bool a = true;
	string oop = "a";
	for (int i = 0; i < o.length(); i++) {
		if (o[i] != oop[0]) {
			a = false;
		}
	}
	return a;
}

bool allB(string o) {
	bool b = true;
	string oop = "b";
	for (int i = 0; i < o.length(); i++) {
		if (o[i] != oop[0]) {
			b = false;
		}
	}
	return b;
}

bool sub(string s, string t) {
	bool x = false;
	if (s.length() > t.length()) {
		if (s.substr(0, t.length() - 1) == t) x = true;
	} else {
		if (t.substr(0, s.length() - 1) == s) x = true;
	}
	return x;
}

int main() {
	int q; string s, t;
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> s >> t;
		if ( (allA(s) && allA(t)) || (allB(s) && allB(t)) ) {
			for (int i = 0; i < max(s.length(), t.length()); i++) {
				cout << s[0];
			}
			cout << "\n";
		} else {
			if (sub(s, t) == true) {
				if (s.length() > t.length()) {
					cout << s << "\n";
				} else {
					cout << t << "\n";
				}
			} else {
				cout << -1 << "\n";
			}
		}
	}
}