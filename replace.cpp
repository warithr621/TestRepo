#include <bits/stdc++.h>
using namespace std;

bool allLess(vector<int> v, int d) {
	bool all = true;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] > d) all = false;
	}
	return all;
}

int main() {
	int t, n, d; vector<int> v;
	cin >> t;
	for (int i = 0; i < t; i++) {
		v.clear();
		cin >> n >> d;
		for (int i = 0; i < n; i++) {
			int a; cin >> a; v.push_back(a);
		}
		if (allLess(v, d) == true) {
			cout << "YES\n";
		} else {
			sort(v.begin(), v.end());
			if (v[0] + v[1] <= d) {
				cout << "YES\n";
			} else {
				cout << "NO\n";
			}
		}
	}
}