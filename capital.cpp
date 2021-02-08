#include <bits/stdc++.h>
using namespace std;

int main() {
	string in; locale loc;
	cin >> in;
	cout << toupper(in[0], loc);
	for (int i = 1; i < in.length(); i++) {
		cout << in[i];
	}
	cout << "\n";
}