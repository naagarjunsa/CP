#include <iostream>
using namespace std;
static int a[10000];

int main() {

	int n, sum = 0, avg = 0, res = 0;
	cin >> n;
	while(n != -1){
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	avg = sum / n;

	if (sum%n != 0) {
		cout << -1 << endl;
	}
	else {
		for (int i = 0; i < n; i++) {
			if (a[i] < avg) {
				res = res + avg - a[i];
			}
		}
		cout << res << endl;
	}
	res = 0; avg = 0; sum = 0;
	cin >> n;
}
	
	return 0;
}
