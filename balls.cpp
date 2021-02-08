#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
	ull t, n; cin >> t;
	while(t--) {
		cin >> n; vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		
		vector<int> nums(a[n - 1]);
		for (int i = 0; i < a[n-1]; i++) nums[i] = 0;
		
		for (int thonk : a) {
			nums[thonk-1] += 1;
		}
		sort(nums.begin(), nums.end());
		cout << nums[nums.size() - 1] << "\n";
	}
}