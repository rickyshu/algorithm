#include<bits/stdc++.h>
using namespace std;
int sum = 0;
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int max = 0;
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	do {	
		sum = 0;
		for (int i = 0; i < n-1; i++) {
			sum += abs(v[i] - v[i + 1]);
		}
		if (max < sum)max = sum;

	} while (next_permutation(v.begin(), v.end()));
	cout << max;
}