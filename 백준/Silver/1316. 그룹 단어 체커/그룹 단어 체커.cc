#include<bits/stdc++.h>
using namespace std;

int main(void) {
	string str;
	int n, cnt = 0;;
	cin >> n;
	while (n--) {
	int check[26] = { 0 };
	bool group = true;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (!check[str[i]-'a']) {
			if (str[i] != str[i + 1]) {
				check[str[i]-'a'] = 1;
			}
		}
		else {
			group = false;
			break;
		};
	}
	if (group == true)cnt++;
	}
	cout << cnt;
}
