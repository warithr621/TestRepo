#include <bits/stdc++.h>
using namespace std;

bool already(vector<string> v, string str) {
	int count = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == str) count++;
	}
	if (count > 0) {
		return true;
	} else {
		return false;
	}
}

int main() {
	string user; vector<string> vec;
	cin >> user;
	for (int i = 0; i < user.length(); i++) {
		if (already(vec, user[i]) == false) {
			vec.push_back(user[i]);
		}
	}
	if (vec.size() % 2 == 0) {
		cout << "CHAT WITH HER!\n";
	} else {
		cout << "IGNORE HIM!\n";
	}
}