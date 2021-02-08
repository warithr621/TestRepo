#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
	int t, x, y; string s; cin >> t;
	while(t--) {
		cin >> x >> y; cin >> s;
		vector<int> v = {0, 0, 0, 0};
		for (int i = 0; i < s.length(); i++) {
			switch (s[i]) {
				case 'U':
					v[0]++;
					break;
				case 'D':
					v[1]++;
					break;
				case 'L':
					v[2]++;
					break;
				case 'R':
					v[3]++;
					break;
			}
		}
		
		if (x < 0) {
			v.erase(v.begin()+3);
			x = 0 - x;
		} else {
			v.erase(v.begin()+2);
		}
		if (y < 0) {
			v.erase(v.begin());
			y = 0 - y;
		} else {
			v.erase(v.begin()+1);
		}

		if (v[0] >= y && v[1] >= x) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
		
	}
}