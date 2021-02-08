#include <bits/stdc++.h>
using namespace std;

int main() {
	int start, num;
	cin >> start >> num;
	for (int i = 0; i < num; i++) {
		if (start % 10 == 0) {
			start /= 10;
		} else {
			start--;
		}
	}
	cout << start << "\n";
}