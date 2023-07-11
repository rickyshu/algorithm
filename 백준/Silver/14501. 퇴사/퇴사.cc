#include<bits/stdc++.h>
using namespace std;
int T[16];
int P[16];
int n;
int ans;
void dfs(int start, int sum) {
	if (start > n) return; //종료조건 재귀는 해당 방향으로 수렴해야 한다!
	ans = max(ans, sum);
	for (int i = start; i < n; i++) {
		dfs(i + T[i], sum + P[i]);
	}
}
; int main(void) {
	ios::sync_with_stdio(false); cout.tie(0); cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> T[i] >> P[i];
	}
	dfs(0, 0);
	cout << ans;	
}