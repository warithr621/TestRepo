#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
	int N; cin >> N;
	vector<int> x(N), y(N); ull ans = 0;
	for (int i = 0; i < N; i++) cin >> x[i];
	for (int i = 0; i < N; i++) cin >> y[i];
	
	for (int i = 0; i < N-1; i++) {
		for (int j = i+1; j < N; j++) {
			if ( (x[j] - x[i])*(x[j] - x[i]) + (y[j] - y[i])*(y[j] - y[i]) > ans) {
				ans = (x[j] - x[i])*(x[j] - x[i]) + (y[j] - y[i])*(y[j] - y[i]);
			}
		}
	}
	
	cout << ans;
}