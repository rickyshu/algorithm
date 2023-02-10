#include<bits/stdc++.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr[5];
	int mean=0, median=0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		mean += arr[i];
	}
	sort(arr, arr+5);
	median = arr[2];
	cout << mean / 5<<"\n"<<median;
}