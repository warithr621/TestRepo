#include <bits/stdc++.h>
using namespace std;

int main() {
	int count; vector<int> abc(3);
	cin >> count;
	for (int i = 0; i < count; i++) {
		for (int i = 0; i < 3; i++) cin >> abc[i];
		sort(abc.begin(), abc.end());
		if (! (abc[1] == abc[2]) ) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
			if (abc[0] == abc[1]) {
				cout << abc[0] << " " << abc[1] << " " << abc[2] << "\n";
			} else {
				cout << abc[2] << " " << abc[0] << " " << abc[0] << "\n";
			}
		}
	}
}