#include <bits/stdc++.h>
using namespace std;

int main() {
	int caseCount; int num;
	cin >> caseCount;
	vector<int> cases(caseCount);
	for (int i = 0; i < caseCount; i++) cin >> cases[i];
	
	for (int i = 0; i < caseCount; i++) {
		if (cases[i] == 1) {
			cout << 9 << "\n";
		} else if (cases[i] == 2) {
			cout << 98 << "\n";
		} else if (cases[i] == 3) {
			cout << 989 << "\n"; 
		} else {
			cout << 989;
			for (int j = 4; j <= cases[i]; j++) {
				num = j % 10;
				num = num - 4;
				if (num < 0) {
					num += 10;
				}
				cout << num;
			}
			cout << "\n";
		}
	}
}