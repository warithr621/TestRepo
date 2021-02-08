#include <bits/stdc++.h>
using namespace std;

int main() {
	int students, puzzles;
	cin >> students >> puzzles;
	vector<int> values(puzzles);
	for (int i = 0; i < puzzles; i++) cin >> values[i];
	sort(values.begin(), values.end());
	if (puzzles % 2 == 0 && students % 2 == 0) {
		cout << values[puzzles - 1 - (puzzles-students)/2] - values[(puzzles-students)/2] << "\n";
	} else if ({
		cout <<  << "\n";
	}
}

5 7 10 10 12 22
(6-3)/2; 6 - 1 - (6-3)/2