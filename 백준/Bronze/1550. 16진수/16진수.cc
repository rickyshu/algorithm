#include<bits/stdc++.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	string str; 
	cin >> str;
	int sum = 0;
	int powerof= 0;
	for (int i = str.length()-1;i>=0; i--) {
		if (str[i] == '0') {
			sum += pow(16, powerof++) * 0;
		}
		else if (str[i] == '1') {
			sum += pow(16, powerof++) * 1;
		}
		else if (str[i] == '2') {
			sum += pow(16, powerof++) * 2;
		}
		else if (str[i] == '3') {
			sum += pow(16, powerof++) * 3;
		}
		else if (str[i] == '4') {
			sum += pow(16, powerof++) * 4;
		}
		else if (str[i] == '5') {
			sum += pow(16, powerof++) * 5;
		}
		else if (str[i] == '6') {
			sum += pow(16, powerof++) * 6;
		}
		else if (str[i] == '7') {
			sum += pow(16, powerof++) * 7;
		}
		else if (str[i] == '8') {
			sum += pow(16, powerof++) * 8;
		}
		else if (str[i] == '9') {
			sum += pow(16, powerof++) * 9;
		}
		else if (str[i] == 'A') {
			sum += pow(16, powerof++) * 10;
		}
		else if (str[i] == 'B') {
			sum += pow(16, powerof++) * 11;
		}
		else if (str[i] == 'C') {
			sum += pow(16, powerof++) * 12;
		}
		else if (str[i] == 'D') {
			sum += pow(16, powerof++) * 13;
		}
		else if (str[i] == 'E') {
			sum += pow(16, powerof++) * 14;
		}
		else if (str[i] == 'F') {
			sum += pow(16, powerof++) * 15;
		}
	}
	cout << sum;
}