#include<bits/stdc++.h>
using namespace std;
vector<int> v;
; int main(void) {
	ios::sync_with_stdio(false); cout.tie(0); cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	for (auto& c : v)cout << c << "\n";
}