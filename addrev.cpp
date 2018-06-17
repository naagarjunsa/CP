#include <iostream>
using namespace std;

int reversenum(int num) {

	int reversenum = 0, digit;

	while (num == 0) {
		digit = num % 10;
		reversenum = reversenum * 10 + digit;
		num = num / 10;
	}
	return reversenum;

}

int main() {

	int testcases, num1, num2, sum, rnum1, rnum2, rsum;
	cin >> testcases;

	for (int i = 0; i < testcases; i++) {

		cin >> num1;
		cin >> num2;

		rnum1 = reversenum(num1);
		rnum2 = reversenum(num2);

		sum = rnum1 + rnum2;

		rsum = reversenum(sum);

		cout << rsum << endl;


	}
	return 0;
}
