#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> num(7);
	for (int i = 0; i < 7; i++) cin >> num[i];
	sort(num.begin(), num.end());
	cout << num[0] << " " << num[1] << " " << num[6] - num[1] - num[0] << "\n";
}