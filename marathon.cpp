#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("marathon.in", "r", stdin);
	freopen("marathon.out", "w", stdout);
	int length; int answer = 0; int total = 0; int large; int skip; int noSkip;
	cin >> length;
	vector<int> x(length); vector<int> y(length);
	
	for (int i = 0; i < length; i++) {
		cin >> x[i];
		cin >> y[i];
	}
	for (int i = 0; i < length; i++) {
		total += abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
	}
	for(int i = 1; i < length-1; i++) {
      		noSkip = abs(x[i+1] - x[i]) + abs(x[i] - x[i-1]) + abs(y[i+1] - y[i]) + abs(y[i] - y[i-1]);
      		skip = abs(x[i+1] - x[i-1]) + abs(y[i+1] - y[i-1]);
      		large = max(large, noSkip - skip);
    	}
	cout << answer << "\n";
}