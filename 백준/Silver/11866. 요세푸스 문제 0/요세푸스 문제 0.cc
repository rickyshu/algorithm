#include<bits/stdc++.h>
using namespace std;
; int main(void) {
	ios::sync_with_stdio(false); cout.tie(0); cin.tie(0);
	int n, k;
	cin >> n >> k;
	deque<int> q;
	vector<int> v;
	for (int i = 1; i <= n; i++) {
		q.push_back(i);
	}
	while (!q.empty()) {
		for (int i = 0; i < k-1; i++) {
		q.push_back(q.front());
		q.pop_front();
		}
		v.push_back(q.front());
		q.pop_front();
	}
	cout << "<";
	for (int i = 0; i < v.size(); i++) {
		if (i < v.size() - 1) {
			cout << v[i] << ", ";
		}
		else {
			cout << v[i];
		}
	}
	cout << ">";
}