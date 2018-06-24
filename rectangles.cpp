#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int k = n, i=0, res = 0;

	while (k-i >= 0) {

		res = res + k - i;
		i++;
		k = n / (i + 1);
	}
	cout << res;

	return 0;
}
