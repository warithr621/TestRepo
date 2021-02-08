/*
ID: warithr1
TASK: gift1
LANG: C++11
*/

#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull finder(vector<string> s, string str) {
	ull f;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == str) f = i;
	}
	return f;
}

int main() {
	freopen("gift1.in", "r", stdin);
	freopen("gift1.out", "w", stdout);
	vector<ull> money; vector<string> names; ull count; cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> names[i]; money[i] = 0;
	}
	
	for (int i = 0; i < count; i++) {
		string who; ull amount, split; cin >> who >> amount >> split;
		if (amount != 0 || split != 0) {
			for (int j = 0; j < split; j++) {
				string n; cin >> n;
				money[ finder(names, n) ] += amount / split;
			}
			ull loss = amount / split; loss *= split;
			money[ finder(names, who) ] -= loss;
		}
	}
	
	for (int i = 0; i < count; i++) {
		cout << names[i] << " " << money[i] << "\n";
	}
	return 0;
}