#include <bits/stdc++.h>
using namespace std;

void TestCase() {
	int x;
	cin >> x;
	cout << 100 - x << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for (int t = 0; t < tc; t++) {
		TestCase();
	}
	return 0;
}
