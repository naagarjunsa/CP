#include <iostream>
using namespace std;

int main() {

	int a;
	
	cin >> a;
	while (a != 0)
	{
		cout << a*(a + 1)*(2 * a + 1) / 6 << endl;
		cin >> a;
	}
	
	
	return 0;
}
