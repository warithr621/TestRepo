#include <bits/stdc++.h>
using namespace std;

int main() {
	int count; int ans = 0; string operation;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> operation;
		if (operation == "++X" || operation == "X++") {
			ans++;
		} else {
			ans--;
		}
	}
	cout << ans << "\n";
}