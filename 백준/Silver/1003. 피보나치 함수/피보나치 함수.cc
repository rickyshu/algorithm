#include<bits/stdc++.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false); cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int Z[45] = {0,};
		int O[45] = {0,};
		int i;
		cin >> i;

		Z[0] = 1; Z[1] = 0; Z[2] = 1;
		O[0] = 0; O[1] = 1; O[2] = 1;

		for (int j = 3; j <= i; j++) {
			Z[j] = Z[j - 2] + Z[j - 1];
			O[j] = O[j - 2] + O[j - 1];
		}
		cout << Z[i] << " " << O[i] << "\n";
	}
}
