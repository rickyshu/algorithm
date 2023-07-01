#include<bits/stdc++.h>
using namespace std;
#define INF 10000000;
int len_dis[405][405];
int V, ans = INF;
int main(void) {
	ios::sync_with_stdio(false); cin.tie(0);
	int road;
	cin >> V>>road;
	for (int i = 1; i <=V; i++) {
		for (int j = 1; j <= V; j++) {
			if (i != j)len_dis[i][j] = INF;
		}
	}

	for (int i = 0; i <road; i++) {
		int from, to, len;
		cin >> from >> to >> len;
		len_dis[from][to] = min(len_dis[from][to], len);
	}
	/*for (int i = 1; i <= road; i++) {
		for (int j = 1; j <= road; j++) {
			cout << len_dis[i][j] << " ";
		}
		cout << "\n";
	}*/

	for (int i = 1; i <= V; i++) {
		for (int j = 1; j <= V; j++) {
			for (int k = 1; k <= V; k++) {
				len_dis[j][k] = min(len_dis[j][k], len_dis[j][i] + len_dis[i][k]);
			}
		}
	}

	for (int i = 1; i <= V; i++) {
		for (int j = 1; j <= V; j++) {			
			if(i!=j)ans = min(ans, len_dis[i][j] + len_dis[j][i]);		
		}
	}
	if (ans == 10000000)cout << -1;
	else cout << ans;

}