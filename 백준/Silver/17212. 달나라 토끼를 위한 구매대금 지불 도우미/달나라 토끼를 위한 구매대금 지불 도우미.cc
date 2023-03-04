#include<bits/stdc++.h>
using namespace std;
int n;
int d[100005];
int main(void) {
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n;
	
	d[0] = 0;
	d[1] = 1;
	d[2] = 1;
	d[3] = 2;
	d[4] = 2;
	d[5] = 1;
	d[6] = 2;
	d[7] = 1;
	
	for (int i = 8; i <= n; i++) {
		d[i] = min({ d[i - 1],d[i - 2],d[i - 5], d[i - 7] })+1;
	}
	cout << d[n];
}