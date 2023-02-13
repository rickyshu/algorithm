#include<bits/stdc++.h>
using namespace std;
char letter[16];
vector<string> ans;
void bit_masking(int pick, int length) {
	int current = 1;
	while (current < (1 << length)) {
		int count_one = 0;
		string str = "";
		bool have = false;
		int cnt = 0;
		for (int i = 0; i < length; i++) {
			if (current & (1 << i))count_one++;
		}
		if (count_one == pick) {
			for(int i=0;i<length;i++){
				if (current & (1 << i)) {
					str += letter[i];
					if (letter[i] == 'a' || letter[i] == 'e' || letter[i] == 'i' || letter[i] == 'o' || letter[i] == 'u')have = true;
					else cnt++;
				}
				
			}
			if (have&&cnt>=2) {
				sort(str.begin(), str.end());
				ans.push_back(str);
			}
		}
		current++;
	}

	sort(ans.begin(), ans.end());
}
; int main(void) {
	ios::sync_with_stdio(false); cout.tie(0); cin.tie(0);
	int L, C;
	cin >> L >> C;
	for (int i = 0; i < C; i++) {
		cin >> letter[i];
	}	
	bit_masking(L, C);
	for (auto nxt : ans) {
		cout <<nxt << "\n";
	}
}