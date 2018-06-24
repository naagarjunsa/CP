#include <iostream>
using namespace std;

int main() {

	int a, b, c;

	cin >> a;
	cin >> b;
	cin >> c;

	while (!(a == 0 && b==0 && c == 0)) {

		if ((b - a) == (c - b)) {
			cout << "AP " << c + (c - b) << endl;
		}
		else
			cout << "GP " << c * ( c / b) << endl;

		cin >> a;
		cin >> b;
		cin >> c;
	}

	return 0;
}
