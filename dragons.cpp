#include <bits/stdc++.h>
using namespace std;

int main() {
	int s, n, x, y; cin >> s >> n;
	map<int, int> mop;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		mop.insert(pair<int, int>(x, y));
	}
	map<int, int>::iterator it = mop.find(mop.begin());
}