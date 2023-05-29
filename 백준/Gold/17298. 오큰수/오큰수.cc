#include<bits/stdc++.h>
using namespace std;
vector<int> q;
int result[1000001];
stack<int> s;
int main(void) {
	ios::sync_with_stdio(false); cout.tie(0); cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		q.push_back(num);
	}
	for (int i = N - 1; i >= 0; i--) {
		while (!s.empty() && s.top() <= q[i])s.pop();//오큰수를 stack에 넣기 위해 q[i]보다 작거나 같은 수는 pop
		if (s.empty())result[i] = -1; //비어 있다는 것은 이보다 더 큰 수는 없다는 것을 의미!
		else result[i] = s.top();//채워져 있다는 것은 top이 오큰수란 의미!
		s.push(q[i]); //그 다음 수의 비교를 위해 stack에 push를 한다!
	}
	for (int i = 0; i < N; i++) {
		cout << result[i]<<" ";
	}
}