#include<bits/stdc++.h>
using namespace std;
using ll=long long;


void hanoi(int a,int b,int n) {
	if (n == 1) {
		cout << a << " " << b << "\n";
		return; 
	}
	hanoi(a, 6 - a - b, n - 1);
	cout << a << " " << b << "\n"; //이것은 n을 옮긴 것을 표현한 것이다!
	hanoi(6 - a - b, b, n - 1);
}

int main(void) {
	ios::sync_with_stdio(false); cin.tie(0);
	int n;
	cin >> n;
	cout << (1 << n) - 1<<"\n";
	hanoi(1, 3, n);
}