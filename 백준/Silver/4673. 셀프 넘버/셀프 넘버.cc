#include<iostream>
using namespace std;

void Kaprekar() {
	int a = 0;
	int num[9995] = {0};
	for (int i = 1; a <= 9994; i++) {
		if (i < 10) {
			a = (i % 10) + i;
			num[a] = -1;
		}
		else if (i>=10 && i < 100) {
			a = (i + (i / 10) + (i % 10));
			num[a] = -1;
		}
		else if (i >= 100 && i < 1000) {
			a = (i + (i/100) + ((i%100)/10) + (i%10));
			num[a] = -1;
		}
		else if (i >= 1000 &&i <= 10000) {
			a = (i +(i/1000)+((i%1000)/100) + ((i%100) /10) + (i%10));
			num[a] = -1;
		}
	}
	for (int i = 1; i <= 9994; i++) {
		if (num[i] != -1) {
			printf("%d\n", i);
		}
	}
}
int main(){
	Kaprekar();
	return 0;
}