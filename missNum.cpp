#include <bits/stdc++.h>
using namespace std;

int main() {
	long long max; long long thing; long long count;
	cin >> max;
	thing = max * (max + 1) / 2;
	for (int i = 1; i < max; i++) {
		cin >> count;
		thing -= count;
	}
	cout << thing << "\n";
}