#include<bits/stdc++.h>
using namespace std;
#define INF 100000000;
int city[105][105];
int N; 
int main(void) {
	ios::sync_with_stdio(false); cin.tie(0);
	for (int i = 0; i < 105; i++) {
		for (int j = 0; j < 105; j++) {
			if(i!=j)city[i][j] = INF;
		}
	}
	cin >> N;
	int bus;
	cin >> bus;
	for (int i = 0; i < bus; i++) {
		int from, to, len;
		cin >> from >> to >> len;
		city[from][to] = min(city[from][to], len);
	}
	for (int i = 1; i <=N; i++) {
		for (int j = 1; j <=N; j++) {
			for (int k = 1; k <=N; k++) {
				city[j][k] = min(city[j][k], city[j][i] + city[i][k]);
			}
		}
	}
	for (int i = 1; i <=N; i++) {
		for (int j = 1; j <=N; j++) {
			if (city[i][j] == 100000000)cout << 0 << " ";
			else cout << city[i][j] << " ";
		}
		cout << "\n";
	}

}