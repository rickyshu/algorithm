#include<bits/stdc++.h>
using namespace std;
int arr[10];
bool isused[10];
int m, n; 
void func(int k) { 
	if (k == n) { //n개를 택하는 문제이니=>k==n은 n개를 이미 택했다는 의미!
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= m; i++) { 
		if (!isused[i]) {
			arr[k] = i;
			isused[i] = 1;
			func(k + 1);
			isused[i] = 0;
		}
	}
}
int main(void) {
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> m >> n; 
	func(0);
}