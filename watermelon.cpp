#include <bits/stdc++.h>
using namespace std;

int main() {
	int count; string x;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> x;
		if (x.length() <= 10) {
			cout << x << "\n";
		} else {
			cout << x[0] << x.length() - 2 << x[x.length() - 1] << "\n";
		}
	}
}