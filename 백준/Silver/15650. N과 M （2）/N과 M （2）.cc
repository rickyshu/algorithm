#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> L;
void comb(int start, int pick) {
	if (pick == 0) {
		for (auto& a : L) { 
			cout << a<<" "; 
		}
		cout << "\n";
	}
	else if (start>n) return;
	else {
		L.push_back(start);
		comb(start + 1, pick-1);
		L.pop_back();
		comb(start + 1, pick);
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int m;
	cin >> n >> m;
	comb(1, m);
}