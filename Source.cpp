#include <iostream>
using namespace std;

int main() {

	int T, a, b;
	cin >> T;

	for (int i = 0; i<T; i++) {

		cin >> a;
		cin >> b;

		if (a - b == 2) {
			if (b % 2 == 0)
				cout << 2 * b + 2 << endl;
			else
				cout << 2 * b + 1 << endl;
		}
		else if (a == b) {
			if (b % 2 == 0)
				cout << 2 * b << endl;
			else
				cout << 2 * b - 1 << endl;
		}
		else {
			cout << "No Number" << endl;
		}
	}

	return 0;
}