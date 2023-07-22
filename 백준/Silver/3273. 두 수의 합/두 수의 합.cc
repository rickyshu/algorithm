#include<bits/stdc++.h>
using namespace std;

int arr[100001];
bool have[2000001];

int main(void) {
	ios::sync_with_stdio(false); cin.tie(0);
	int n,x;
	cin >> n;
	for (int i = 0; i < n; i++)cin >> arr[i];
	cin >> x;
	
	int ans = 0;

	for (int i = 0; i < n; i++) {

		if (x - arr[i] > 0 && have[x - arr[i]])ans++;
		have[arr[i]]=true;
	}
	cout << ans;
}
