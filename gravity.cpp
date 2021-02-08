#include <bits/stdc++.h>
using namespace std;

int main() {
	typedef unsigned long long ull;
	ull n; vector<int> a; cin >> n;
	while(n--) {
		int x; cin >> x; a.push_back(x);
	}
	sort(a.begin(), a.end());
	cout << a[0];
	for (int i = 1; i < a.size(); i++) {
		cout << " " << a[i];
	}
	cout << "\n";
}