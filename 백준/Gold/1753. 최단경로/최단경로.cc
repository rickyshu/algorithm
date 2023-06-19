#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second
vector<pair<int, int>> adj[20005];
const int INF = 1e9 + 10;
int d[20005];
int main(void) {
	ios::sync_with_stdio(false); cin.tie(0);
	int v, e, st;
	cin >> v >> e >> st;
	//당연히 d는 vertex의 갯수만큼 감소하는거지 생각을 좀 해라!
	fill(d, d + v + 1, INF); //전부다 INF으로 초기화해야, 더 작은 값이 왔을 때 갱신이 가능하다!
	
	while (e--) {
		int u, v, w;
		cin >> u >> v >> w;
		adj[u].push_back({ w,v });
	}
		
	priority_queue < pair<int, int>, vector < pair<int, int>>, greater<pair<int, int>>> pq;
	d[st] = 0;
	pq.push({ d[st], st });//pair 형식으로 입력을 해야 한다!
	while(!pq.empty()){ //X가 가중치, Y가 vetex임을 기억해라!
		auto cur = pq.top(); pq.pop();
		if (d[cur.Y] != cur.X)continue;
		for (auto& nxt : adj[cur.Y]) {
			if (d[nxt.Y] <= d[cur.Y] + nxt.X)continue;
			d[nxt.Y] = d[cur.Y] + nxt.X;
			pq.push({ d[nxt.Y], nxt.Y }); //vertex값을 입력해야지!
		}
	}
	for (int i = 1; i <=v; i++) {
		if (d[i] == INF)cout << "INF" << "\n";
		else cout << d[i] << "\n";
	}

}