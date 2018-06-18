#include <iostream>
using namespace std;

int power(int a, int b) {
	int res = 1;
	for (int i = 0; i < b; i++) {
		res = res*a;
	}
	return res;
}

int findzeroes(int n) {

	int res = 0, sum = 0,exp=1;

	do {
		res = n / power(5, exp);
		exp = exp + 1;
		sum = sum + res;
	} while (res != 0);

	return sum;
}

int main() {

	int T,num;
	cin >> T;

	for (int i = 0; i < T; i++) {



	}
	return 0;
}