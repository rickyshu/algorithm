#include<bits/stdc++.h>
using namespace std;
; int main(void) {
	ios::sync_with_stdio(false); cout.tie(0); cin.tie(0);
	int n;
	cin >> n;
	queue<int> q1;
	queue<int> q2;
	for (int i = 1; i <= n; i++) {
		q1.push(i);
	}
	while (q1.size() != 1) {
		q2.push(q1.front());
		q1.pop();
		if (q1.size() == 1)break;
		q1.push(q1.front());
		q1.pop();
	}

	while (!q2.empty()) {
		cout << q2.front()<<" ";
		q2.pop();
	}
	
	cout << q1.front();
}