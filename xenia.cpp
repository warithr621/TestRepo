#include <bits/stdc++.h>
using namespace std;

int main() {
	typedef unsigned long long ull;
	ull n, m, time = 0, house = 1; vector<ull> a; cin >> n >> m;
	for (ull i = 0; i < m; i++) {
		ull x; cin >> x; a.push_back(x);
	}
	for (ull i : a) {
		if (i >= house) {
			time += (i - house);
		} else {
			time += (i - house + n);
		}
		house = i;
	}
	cout << time << "\n";
}