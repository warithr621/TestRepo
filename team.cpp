#include <bits/stdc++.h>
using namespace std;

int main() {
	int count; int x; int good; int ans = 0;
	cin >> count;
	for (int i = 0; i < count; i++) {
		good = 0;
		for (int i = 1; i <= 3; i++) {
			cin >> x;
			if (x == 1) {
				good++;
			}
		}
		if (good >= 2) {
			ans++;
		}
	}
	cout << ans << "\n";
}