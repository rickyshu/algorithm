#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second
string board[1001];
int dist1[1001][1001];
int dist2[1001][1001];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int t,n, m;
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
    find:
	while (t--) {
		for (int i = 0; i < 1001; i++) {
			board[i] = "";
			
		}	
		for (int i = 0; i < 1001; i++) {				
			for (int j = 0; j < 1001; j++) {
				dist1[i][j] =0;
			}
		}
		for (int i = 0; i < 1001; i++) {
			for (int j = 0; j < 1001; j++) {
				dist2[i][j] = 0;
			}
		}
		cin >> m >> n;
		queue<pair<int, int>> q1;
		queue<pair<int, int>> q2;

		for (int i = 0; i < n; i++)cin >> board[i];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (board[i][j] == '*') {
					q1.push({ i,j });

				}
				else if (board[i][j] == '@') {
					q2.push({ i,j });
				}
				else if (board[i][j] == '.') {
					dist2[i][j] = -1;
				}
			}
		}
		while (!q1.empty()) {
			auto cur = q1.front(); q1.pop();
			for (int dir = 0; dir < 4; dir++) {
				int cx = cur.X + dx[dir];
				int cy = cur.Y + dy[dir];
				if (cx < 0 || cx >= n || cy < 0 || cy >= m)continue;
				if (board[cx][cy] == '#' || board[cx][cy]=='*'||dist1[cx][cy] >0)continue;
				dist1[cx][cy] = dist1[cur.X][cur.Y] + 1;
				q1.push({ cx,cy });
			}
		}
		while (!q2.empty()) {
			auto cur = q2.front(); q2.pop();
			for (int dir = 0; dir < 4; dir++) {
				int cx = cur.X + dx[dir];
				int cy = cur.Y + dy[dir];
				if (cx < 0 || cx >= n || cy < 0 || cy >= m) {
					if (board[cur.X][cur.Y] != '#') {
						cout << dist2[cur.X][cur.Y] + 1<<"\n";
						goto find;
					}
					continue;
				}
				if (board[cx][cy] == '#' || (dist1[cx][cy]!=0&&dist2[cur.X][cur.Y] + 1 >= dist1[cx][cy])||dist2[cx][cy]>=0)continue;
				dist2[cx][cy] = dist2[cur.X][cur.Y] + 1;
				q2.push({ cx,cy });
			}
		}
		cout << "IMPOSSIBLE" << "\n";
	}
}
