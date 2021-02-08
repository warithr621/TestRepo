#include <bits/stdc++.h>
using namespace std;

bool already(vector<int> v, int i) {
	bool b = false;
	for (int p = 0; p < v.size(); p++) {
		if (v[p] == i) b = true;
	}
	return b;
}

int main() {
	typedef unsigned long long ull;
	ull n, p, q, apple; cin >> n; vector<int> epic(n); vector<int> input;
	for (int i = 0; i < n; i++) epic[i] = i+1;
	
	cin >> p;
	for (int i = 0; i < p; i++) {
		cin >> apple;
		if ( already(input, apple) == false ) input.push_back(apple);
	}
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> apple;
		if ( already(input, apple) == false ) input.push_back(apple);
	}
	if (input.size() == epic.size()) {
		cout << "I become the guy.\n";
	} else {
		cout << "Oh, my keyboard!\n";
	}
}