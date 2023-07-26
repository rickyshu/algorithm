#include<bits/stdc++.h>
using namespace std;
const int INF = 10000000;
int d[5005];
int n;

int main(void) {
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n;
	d[1] = INF;
	d[2] = INF;
	d[3] = 1; 
	d[4] = INF;
	d[5] = 1;

	for (int i = 6; i <= n; i++) {
		d[i] = min(d[i - 3], d[i - 5])+1;
	}
	if (d[n] >= INF)cout << -1;
	else cout << d[n];

}