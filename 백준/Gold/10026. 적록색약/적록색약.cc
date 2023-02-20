#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second
string board[102];
bool vis[102][102];
int n;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int can_see, cant_see;
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) cin >> board[i];
	queue<pair<int, int>> q;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((board[i][j] == 'R'||board[i][j]=='G') && !vis[i][j]) {
				cant_see++;
				q.push({ i,j });
				vis[i][j] = 1;
				while (!q.empty()) {
					auto cur = q.front(); q.pop();
					for (int dir = 0; dir < 4; dir++) {
						int cx = cur.X + dx[dir];
						int cy = cur.Y + dy[dir];
						if (cx < 0 || cx >= n || cy < 0 || cy >= n)continue;
						if (board[cx][cy] == 'B' || vis[cx][cy])continue;
						vis[cx][cy] = 1;
						q.push({ cx,cy });
					}
				}
			}
			else if (board[i][j] == 'B' && !vis[i][j]) {
				cant_see++;
				q.push({ i,j });
				vis[i][j] = 1;
				while (!q.empty()) {
					auto cur = q.front(); q.pop();
					for (int dir = 0; dir < 4; dir++) {
						int cx = cur.X + dx[dir];
						int cy = cur.Y + dy[dir];
						if (cx < 0 || cx >= n || cy < 0 || cy >= n) continue;
						if(board[cx][cy]=='R'||board[cx][cy]=='G'||vis[cx][cy])continue;
						vis[cx][cy] = 1;
						q.push({ cx,cy });
					}
				}
			}
		}
	}
	for (int i = 0; i < n; i++)fill(vis[i], vis[i] + 100, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (board[i][j] == 'R'&&!vis[i][j]) {
				can_see++;
				q.push({ i,j });
				vis[i][j] = 1;
				while (!q.empty()) {
					auto cur = q.front(); q.pop();
					for (int dir = 0; dir < 4; dir++) {
						int cx = cur.X + dx[dir];
						int cy = cur.Y + dy[dir];
						if (cx < 0 || cx >= n || cy < 0 || cy >= n) continue;
						if (board[cx][cy] == 'B' || board[cx][cy] == 'G' || vis[cx][cy])continue;
						vis[cx][cy] = 1;
						q.push({ cx,cy });
					}
				}
			}
			else if (board[i][j] == 'G' && !vis[i][j]) {
				can_see++;
				q.push({ i,j });
				vis[i][j] = 1;
				while (!q.empty()) {
					auto cur = q.front(); q.pop();
					for (int dir = 0; dir < 4; dir++) {
						int cx = cur.X + dx[dir];
						int cy = cur.Y + dy[dir];
						if (cx < 0 || cx >= n || cy < 0 || cy >= n) continue;
						if (board[cx][cy] == 'R' || board[cx][cy] == 'B' || vis[cx][cy])continue;
						vis[cx][cy] = 1;
						q.push({ cx,cy });
					}
				}
			}
			else if (board[i][j] == 'B' && !vis[i][j]) {
				can_see++;
				q.push({ i,j });
				vis[i][j] = 1;
				while (!q.empty()) {
					auto cur = q.front(); q.pop();
					for (int dir = 0; dir < 4; dir++) {
						int cx = cur.X + dx[dir];
						int cy = cur.Y + dy[dir];
						if (cx < 0 || cx >= n || cy < 0 || cy >= n) continue;
						if (board[cx][cy] == 'R' || board[cx][cy] == 'G' || vis[cx][cy])continue;
						vis[cx][cy] = 1;
						q.push({ cx,cy });
					}
				}
			}
		}
	}
	cout <<can_see<<" "<<cant_see;
}