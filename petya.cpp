#include <bits/stdc++.h>
using namespace std;

int main() {
	string one, two;
	cin >> one >> two;
	if (lexicographical_compare(one.begin(), one.end(), two.begin(), two.end())) {
		cout << -1 << "\n";
	} else if (one == two) {
		cout << 0 << "\n";
	} else {
		cout << 1 << "\n";
	}
}