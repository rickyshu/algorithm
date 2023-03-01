#include<bits/stdc++.h>
using namespace std;
; int main(void) {
	ios::sync_with_stdio(false); cout.tie(0); cin.tie(0);
	string n;
	cin >> n;
	
	sort(n.begin(), n.end());
	
	for (int i = n.length()-1; i>=0; i--) {
		cout << n[i];
	}


}