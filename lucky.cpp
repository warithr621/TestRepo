#include <bits/stdc++.h>
using namespace std;

string canDivide(int n) {
	int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
	bool div = false;
	for (int L : lucky) {
		if (n % L == 0) div = true;
	}
	if (div == true) {
		return "YES";
	} else {
		return "NO";
	}
}

int main() {
	int n; cin >> n;
	cout << canDivide(n) << "\n";
}