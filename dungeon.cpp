#include <bits/stdc++.h>
using namespace std;

int main() {
	int test,a,b,c;
	cin >> test;
	for (int i = 0; i < test; i++) {
		cin >> a >> b >> c;
		int x = (a+b+c)/7;	
		if ((a + b + c - 3*x) % 7 == (6*x) % 7) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}