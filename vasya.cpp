#include <bits/stdc++.h>
using namespace std;

int main() {
	typedef unsigned long long ull;
	ull n, m; cin >> n >> m; ull ans = 0;
	while (n) {
		++ans;
		--n;
		if (ans%m==0)++n;
	}
	cout << ans << "\n";
}