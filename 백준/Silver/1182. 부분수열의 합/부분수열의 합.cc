#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
int cnt;
void bit_masking(int n, int s) {
	int current = 1;
	while (current < (1 << n)) { //결국 current=> if(n=5이면 00000=>11111까지 순회를 하게 된다!)
		int sum = 0;
		for (int i = 0; i < n; i++) {
			if (current & (1 << i)) sum += arr[i];

		}
		if (sum == s) {
			cnt++;
		}
		current++;
	}
}
int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, s;
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		arr.push_back(num);
	}
	bit_masking(n,s);
	cout << cnt;
}