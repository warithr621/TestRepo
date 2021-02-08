#include <bits/stdc++.h>
using namespace std;

int main() {
	string word; cin >> word;
	bool cap = true;
	for (int i = 1; i < word.length(); i++) {
		if (word[i] == putchar(tolower(word[i]))) {
			cap = false;
		}
	}
	if (cap == false) {
		cout << word << "\n";
	} else {
		if (word[0] == putchar(toupper(word[0]))) {
			putchar(tolower(word[0]));
		} else {
			putchar(toupper(word[0]));
		}
		for (int i = 1; i < word.length(); i++) {
			putchar(tolower(word[i]));
		}
		cout << "\n";
	}
}