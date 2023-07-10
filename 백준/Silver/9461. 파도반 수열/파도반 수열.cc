#include<bits/stdc++.h>
using namespace std;
long long int d[105];
int main(void) {
	ios::sync_with_stdio(false); cin.tie(0);
	int T; 
	cin >> T;
	d[1] = 1;
	d[2] = 1;
	d[3] = 1;
	while (T--) {
		int n;
		cin >> n;

		for (int i = 4; i <= n; i++) {
			d[i] = d[i - 3] + d[i - 2];
		}
		cout << d[n]<<"\n";

	}
}