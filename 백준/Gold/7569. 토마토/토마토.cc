#include<bits/stdc++.h>
using namespace std;
int board[102][102][102];
int dist[102][102][102];
int m, n, h;
int dx[6] = {1,0,-1,0,0,0};
int dy[6] = {0,0,0,1,0,-1};
int dz[6] = {0,1,0,0,-1,0};
int main(void){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> m >> n >> h;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				cin >> board[i][j][k];
			}
		}
	}
	queue<tuple<int, int, int>> q;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				if (board[i][j][k] == 1) {
					q.push({ i,j,k });
				 }
				 else if (board[i][j][k] == 0) {
					 dist[i][j][k] = -1;
				 }
			}
		}
	}
	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		for (int dir = 0; dir<6; dir++) {
			int cz = get<0>(cur) + dz[dir];
			int cx = get<1>(cur) + dx[dir];
			int cy = get<2>(cur) + dy[dir];
			if (cx < 0 || cx >= n || cy < 0 || cy >= m || cz < 0 || cz >= h)continue;
			if(dist[cz][cx][cy] >= 0 || board[cz][cx][cy] != 0)continue;
			dist[cz][cx][cy] = dist[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
			q.push({ cz,cx,cy });
		}
	}
	int ans = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				if (dist[i][j][k] == -1){ 
					cout << "-1";
					return 0;
				}
				else {
					ans = max(ans, dist[i][j][k]);
				}
			}
			
		}
	}
	cout << ans;
}