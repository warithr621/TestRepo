#include <bits/stdc++.h>
using namespace std;

bool allZero(vector<int> v) {
	vector<int> x(v.size());
	for (int i = 0; i < v.size(); i++) x[i] == 0;
	if (v == x) {
		return true;
	} else {
		return false;
	}
}

int main() {
	int n; int k; vector<int> scores;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int x; cin >> x; scores.push_back(x);
	}
	if (allZero(scores) == true) {
		cout << 0 << "\n";
	} else {
		int special = scores[k-1]; int count = 0;
		for (int i : scores) {
			if (i >= special && i > 0) {
				count++;
			}
		}
		cout << count << "\n";
	}
}