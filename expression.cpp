#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;
	int val[] = {a+b+c, a*b*c, a*b+c, a+b*c, (a+b)*c, a*(b+c)};
	sort(val, val+6);
	cout << val[5] << "\n";
}