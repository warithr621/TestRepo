#include <bits/stdc++.h>
using namespace std;

bool already(vector<int> v, int i) {
	int count = 0;
	for (int o = 1; o < v.size(); o++) {
		if (v[o] == i) {
			count++;
		}
	}
	if (count > 0) {
		return true;
	} else {
		return false;
	}
}

int main() {
	typedef unsigned long long ull;
	ull t, n, a; cin >> t; vector<int> vec;
	while(t--) {
		cin >> n;
		while(n--) {
			cin >> a;
			if (already(vec, a) == false) vec.push_back(a);
		}
		cout << vec[0];
		for (int i = 1; i < vec.size(); i++) {
			cout << " " << vec[i];
		}
		cout << "\n";
	}
}