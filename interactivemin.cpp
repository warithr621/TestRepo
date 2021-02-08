#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
	int n, ans; cin >> n;
	vector<int> a(n+2); a[0] = INT_MAX; a[n+1] = INT_MAX;
	for (int i = 1; i <= n; i++) cin >> a[i];
	
	int count = 1;
	while(a[count] != 1) count++;
	printf("? %d", count); fflush(stdout);
	printf("! %d", count); fflush(stdout);
}