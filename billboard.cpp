#include <bits/stdc++.h>
using namespace std;

bool corner(int x, int y, vector<int> check) {
	return check[0] <= x && x <= check[1] && check[2] <= y && y <= check[3];
}

int main() {
	freopen("billboard.in", "r", stdin);
	freopen("billboard.out", "w", stdout);
	vector<int> lawn(4);
	vector<int> food(4);
	for (int i = 0; i < 4; i++) cin >> lawn[i];
	for (int i = 0; i < 4; i++) cin >> food[i];

	int cornersCovered = 0;
	if (corner(lawn[0], lawn[1], food)) cornersCovered++;
	if (corner(lawn[0], lawn[3], food)) cornersCovered++;
	if (corner(lawn[2], lawn[1], food)) cornersCovered++;
	if (corner(lawn[2], lawn[3], food)) cornersCovered++;
	
	if (cornersCovered < 2) {
		cout << (lawn[3] - lawn[1]) * (lawn[2] - lawn[0]) << "\n";
	} else if (cornersCovered == 4) {
		cout << 0 << "\n";
	} else {
		int x;
		int y;
		x = min(lawn[2], food[2]) - max(lawn[0], food[0]);
		y = min(lawn[3], food[3]) - max(lawn[1], food[1]);
		cout << ((lawn[3] - lawn[1]) * (lawn[2] - lawn[0])) - x*y << "\n";
	}
}