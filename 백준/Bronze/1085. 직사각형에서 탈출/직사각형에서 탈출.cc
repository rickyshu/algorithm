#include<bits/stdc++.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	vector<int> v = { w - x,h - y,x - 0,y - 0 };
	int smallest = v[0];
	for (int i = 0; i < v.size(); i++) {
		smallest = min(smallest, v[i]);
	}
	cout << smallest;
    }
