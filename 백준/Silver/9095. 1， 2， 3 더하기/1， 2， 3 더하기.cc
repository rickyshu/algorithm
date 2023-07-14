#include<bits/stdc++.h>
using namespace std;
int d[15];
int main(void) {
	ios::sync_with_stdio(false); cin.tie(0);
	int n;
	cin >> n;
	d[1] = 1; 
	d[2] = 2;
	d[3] = 4;
	for (int i = 4; i <=10; i++) {
		d[i] = d[i - 1] + d[i - 2] + d[i - 3];

	}
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		cout << d[num] << "\n";
	}


}
