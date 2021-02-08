#include <bits/stdc++.h>
using namespace std;

bool isIn(vector<int> v, int i) {
	bool b = false;
	for (int j = 0; j < v.size(); j++) {
		if (v[j] == i) b = true;
	}
	return b;
}

int main() {
	typedef unsigned long long ull;
	ull t, n; cin >> t;
	while(t--) {
		cin >> n; vector<int> v(n);
		for (int i = 0; i < 2*n; i++) cin >> v[i];
		sort(v.begin(), v.end());
		
		bool destruct = true;
		int ans[2*n];
		if( isIn(v, v[2*n-1] - v[2*n-2] ) {
			
		while (destruct == true) {
			if (
	}
}