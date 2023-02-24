#include<bits/stdc++.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false); cin.tie(0);
	vector<pair<int, int>> v;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;	
		v.push_back((make_pair(y, x)));
	}
	sort(v.begin(), v.end());

	for (auto& c : v)cout << c.second << " "<<c.first<<" \n";


}