#include<bits/stdc++.h>
using namespace std;
int cnt;
; int main(void) {
	ios::sync_with_stdio(false); cout.tie(0); cin.tie(0);
	string str;
	cin >> str;
	while (int(str.size()) != 1) {
		int sum = 0;
		for (int i = 0; i < str.size(); i++) {
			sum += str[i] - 48;

		}
		str = to_string(sum);
		cnt++;
	}
	cout << cnt << "\n";
	if (str == "3" || str == "6" || str == "9")cout << "YES";
	else cout << "NO";
}