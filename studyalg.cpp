#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, X; cin >> N >> X;
	vector<int> a(N);
	for (int i = 0; i < N; i++) cin >> a[i];
	sort(a.begin(), a.end());
	int count = 0, time = 0;
	while (count < N && time + a[count] <= X) {
		time += a[count];
		count++;
	}
	cout << count;
}