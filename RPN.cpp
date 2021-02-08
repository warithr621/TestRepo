#include <bits/stdc++.h>
using namespace std;

bool isOper(char c) {
	bool b = false; vector<char> vec = {'+', '-', '*', '/'};
	for (char ch : vec) {
		if (ch == c) b = true;
	}
	return b;
}

double math (int i1, int i2, char c) {
	if (c == '+') {
		return i1 + i2;
	} else if (c == '-') {
		return i1 - i2;
	} else if (c == '*') {
		return i1 * i2;
	} else {
		return i1 / i2;
}

int main() {
	stack<double> rpn; string s; cin >> s;
	for (int i = 0; i < s.length(); i += 2) {
		if ( Oper(s[i]) ) {
			int a, b;
			a = rpn.pop(); b = rpn.pop();
			rpn.push( math(a, b, s[i]) );
		} else {
			rpn.push(s[i]);
		}
	}
	cout << rpn.top() << "\n";
}
