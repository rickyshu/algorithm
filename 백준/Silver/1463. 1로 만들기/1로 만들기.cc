#include<bits/stdc++.h>
using namespace std;
int d[1000005];
int main(void) {
	ios::sync_with_stdio(false); cin.tie(0);
	int n;
	cin >> n;
	d[1] = 0;
	for (int i = 2; i <=n; i++) {
		int three= 1000005, two= 1000005, one=d[i-1]+1;
		if (i % 3 == 0) {
			three = d[i / 3]+1;
		}
		if (i % 2 == 0) {
			two = d[i / 2] + 1;
		}

		d[i] = min({ three,two,one });
	}
	cout << d[n];	

}