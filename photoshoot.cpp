#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
	freopen("photo.in", "r", stdin); freopen("photo.out", "w", stdout);
	ull N; cin >> N; 
	vector<ull> b(N), a(N);
	for (int i = 0; i < N-1; i++) cin >> b[i];
	
	ull sum = 0;
	for (int i = 0; i < N-1; i++) sum += b[i];
	b[N-2] = N * (N+1) - sum;
	
	ull num = b[1] - b[0] + b[N-2] - b[N-3];
	
}