#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int countZero(vector<ull> v) {
	int num = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == 0) {
			num++;
		}
	}
	return num;
}

int main() {
	ull n, a, ans = 0; vector<ull> ids, mod;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a; ids.push_back(a);
	}
	for (int i = 0; i < n; i++) mod.push_back( (ids[i] % 2) );
	sort(mod.begin(), mod.end());
	
	while( countZero(mod) > 0) {
		mod.pop_back(); mod.erase(mod.begin());
		ans += 2;
	}
	
	if ( mod.size() % 3 == 0 ) {
		int t = mod.size() / 3; t *= 2;
		ans += t;
	} else if ( mod.size() % 3 == 1 ) {
		int t = (mod.size()/5); t *= 2; t++;
		ans += t;
	} else {
		int t = (mod.size()/3); t *= 2; t++;
		ans += t;
	}
	
	cout << ans << "\n";
}