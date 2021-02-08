#include <bits/stdc++.h>
using namespace std;

int looper(vector<string> v, string s) {
	int num;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == s) {
			num = i;
		}
	}
	return num;
}

int main() {
	typedef unsigned long long ull;
	string alphabet, word; vector<string> cowphabet; vector<ull> indices;

	cin >> alphabet >> word;
	for (int i = 0; i < 26; i++) {
		string s{alphabet[i]};
		cowphabet.push_back(s);
	}
	for (int i = 0; i < word.size(); i++) {
		string str{word[i]};
		indices.push_back( looper(cowphabet, str) );
	}
	
	ull ans = 1, track = indices[0];
	for (int i = 1; i < indices.size(); i++) {
		if (indices[i] <= track) {
			ans++;
		}
		track = indices[i];
	}
	
	cout << ans << "\n";
}