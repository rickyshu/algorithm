#include<bits/stdc++.h>
using namespace std;
stack<int> s;
queue<int> q;
vector<char> result;
int main(void) {
	ios::sync_with_stdio(false); cin.tie(0);
	int T;
	cin >> T;
	int cnt = 1;
	for (int i = 0; i < T; i++) {
		int n;
		cin >> n; 
		q.push(n);
	}
	s.push(cnt++);
	result.push_back('+');
	while (!q.empty()) {
		if (s.empty()) {
			s.push(cnt++);
			result.push_back('+');
		}
		if (!s.empty()&&s.top() != q.front()) {
			if (cnt > T)break;
			s.push(cnt++);
			result.push_back('+');
		}
		else if (!s.empty() && s.top() == q.front()) {
			s.pop();
			q.pop();
			result.push_back('-');
		}
	}
	if (!s.empty()) {
		cout << "NO";
	}
	else {
		for (int i = 0; i < result.size(); i++) {
			cout << result[i] << "\n";
		}
	}
}