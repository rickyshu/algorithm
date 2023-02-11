#include<bits/stdc++.h>
using namespace std;
int ans[2000];
; int main(void) {
	ios::sync_with_stdio(false); cout.tie(0); cin.tie(0);
	int idx = 0;
	int cnt = 1;
	int sum = 0;
	while (idx<1002) {
		for (int i = 0; i < cnt; i++) {
			ans[idx++] = cnt;
		}

		cnt++;
	}
	int a, b;
	cin >> a >> b;
	for (int i = a - 1; i < b; i++) {
		sum += ans[i];
	}
	cout << sum;

}