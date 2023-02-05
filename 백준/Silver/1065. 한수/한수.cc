#include<iostream>
using namespace std;

int one_num(int n) {

	int n1, n2, n3, cnt = 0;
	if (n < 100) {
		
		return n;

	}
	else {
		for (int i = 100; i <= n; i++) {
			n1 = i / 100;
			n2 = (i % 100) / 10;
			n3 = i % 10;
			if ((n2-n1)==(n3-n2)) {
				cnt++;
			}
		}
		return cnt+99;
	}
}

int main() {
	int x,result;
	cin >> x;
	result=one_num(x);
	cout << result << endl;
	return 0;
}