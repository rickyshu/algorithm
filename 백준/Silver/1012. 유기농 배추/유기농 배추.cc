#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[51][51];
bool vis[51][51];
int n, m;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int main(void) {
	int t;
	cin >> t;
	while (t--) {
		int worm = 0;
		int m,n, k;
		cin >> m >> n >> k;
		for (int i = 0; i < 51; i++)fill(board[i], board[i] + 50, 0);
		for (int i = 0; i < 51; i++)fill(vis[i], vis[i] + 50, 0);
		for (int i = 0; i < k; i++) {
			int x, y;
			cin >> x >> y;
			board[y][x] = 1;
		}
		queue<pair<int, int>> q;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (board[i][j] == 1 && !vis[i][j]) {
					worm++;
					q.push({ i,j });
					vis[i][j] = 1;
					while (!q.empty()) {
						auto cur = q.front(); q.pop();
						for (int dir = 0; dir < 4; dir++) {
							int cx = cur.X + dx[dir];
							int cy = cur.Y + dy[dir];
							if (cx < 0 || cx >= n || cy < 0 || cy >= m)continue;
							if (board[cx][cy] != 1 || vis[cx][cy])continue;
							vis[cx][cy] = 1;
							q.push({ cx,cy });
						}
					}
				}
			}
		}
		cout << worm << "\n";
	}
}