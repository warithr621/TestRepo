#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

bool already(vector<ull> v, ull i) {
	bool smthing = false;
	for (ull t = 0; t < v.size(); t++) {
		if (v[t] == i) smthing == true;
	}
	return smthing;
}

int main() {
	ull t, a, b, k, x; cin >> t;
	while(t--) {
		cin >> a >> b >> k;
		ull ans = 0;
		if (k >= 2) {
			vector<ull> apple(k), banana(k);
			for (ull i = 0; i < k; i++) cin >> apple[i];
			for (ull i = 0; i < k; i++) cin >> banana[i];
	
			for (ull i = 0; i < k; i++) {
				for (ull j = i+1; j < k; j++) {
					if (apple[i] != apple[j] && banana[i] != banana[j]) {
						ans++;
					}
				}
			}
		}
		cout << ans/2 << "\n";
	}
}