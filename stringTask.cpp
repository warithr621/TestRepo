#include <bits/stdc++.h>
using namespace std;

bool isVowel(char a) {
	char vowels [] = {'a', 'e', 'i', 'o', 'u'};
	bool v = false;
	for (char i : vowels) {
		if (i == putchar(tolower(a))) {
			v = true;
		}
	}
	return v;
}
int main() {
	string input; cin >> input;
	for (int i = 0; i < input.length(); i++) {
		if (isVowel(input[i]) == false) {
			cout << "." << putchar(tolower(input[i]));
		}
	}
	cout << "\n";
}