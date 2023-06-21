#include<bits/stdc++.h>
using namespace std;
int dist[105][105];
int item[105];
const int INF = 1e9+10;
int ans;
int main(void) {
	ios::sync_with_stdio(false); cin.tie(0);
	int n, m, r;
	cin >> n >> m >> r;

	for (int i = 1; i <=n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i != j)dist[i][j] = INF;
		}
	}

	for (int i = 1; i <= n; i++) {
		int num;
		cin >> num;
		item[i] = num;
	}

	for (int i = 0; i < r; i++) {
		int from, to, len;
		cin >> from >> to >> len;
		dist[from][to] = min(dist[from][to], len);
		dist[to][from] = min(dist[to][from], len);
	}


	/*cout << "\n";
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (dist[i][j] == INF)cout << "0" << " ";
			else cout << dist[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";*/

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				dist[j][k] = min(dist[j][k], dist[j][i] + dist[i][k]);
			}
		}
	}

	//for (int i = 1; i <= n; i++) {
	//	for (int j = 1; j <= n; j++) {
	//		if (dist[i][j] == INF)cout << "0" << " ";
	//		else cout << dist[i][j] << " ";
	//	}
	//	cout << "\n";
	//}

	//m이 수색 범위이다! 
	int max_num = 0;
	for (int i = 1; i <= n; i++) {
		ans = 0;
		for (int j = 1; j <= n; j++) {
			if (dist[i][j] <= m) {
				ans += item[j];
			}
		}
		max_num = max(max_num, ans);
	}
	cout << max_num;
}
