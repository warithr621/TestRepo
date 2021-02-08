#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> v) {
	int s = 0;
	for (int i = 0; i < v.size(); i++) {
		s += v[i];
	}
	return s;
}

int main() {
	int count; int candyNum; int weight; int x; vector<int> alice; vector<int> bob;
	cin >> count;
	for (int i = 0; i < count; i++) {
		weight = 0;
		alice.clear(); alice.push_back(0);
		bob.clear(); bob.push_back(0);
		cin >> candyNum;
		for (int i = 0; i < candyNum; i++) {
			cin >> x;
			if (sum(alice) <= sum(bob)) {
				alice.push_back(x);
			} else {
				bob.push_back(x);
			}
			
		}
		if (sum(alice) == sum(bob)) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}