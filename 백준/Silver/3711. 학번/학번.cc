#include<bits/stdc++.h>
using namespace std;
int ans[301];
; int main(void) {
	ios::sync_with_stdio(false); cout.tie(0); cin.tie(0);
	int n;
	cin >> n;
	while (n--) {
		int g; 
		cin >> g;
		vector<int> q;
		for (int i = 0; i < g; i++) {	
			int num;
			cin >> num;
			q.push_back(num);
			//cout << g;
			//for (auto& c : q)cout << c << " ";
		}
		//cout << "\n";
		if (q.size() == 1) {
			cout << 1<<"\n";
		}
		else {
			int cnt = 1;
			while (1) {
				bool find = true;
				for (int j = 0; j < q.size(); j++) {
					ans[j] = q[j] % cnt;
				}
				//for (int i = 0; i < q.size(); i++)cout << ans[i] << " ";

				for (int j = 0; j < q.size(); j++) {
					for (int k = j+1; k < q.size(); k++) {
						if (ans[j] == ans[k]) {
							find = false;
							break;
						}
					}
					if (!find)break;
				}
				if (!find) {
					cnt++;
				}
				else {
					cout << cnt<<"\n";
					break;
				}
			}
		}
	}
}