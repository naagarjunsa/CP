#include <iostream>
#include <algorithm>
using namespace std;

static int a[10000], b[10000];

int main() {

	int t;
	cin >> t;

	int n, m;
	for (int g = 0; g < t; g++) {
		cin >> n;
		cin >> m;
		int maxa = 0;
		int maxb = 0;
		for (int j = 0; j < n; j++) {
			cin >> a[j];
			if (a[j] > maxa)
				maxa = a[j];
		}
		
		for (int j = 0; j < m; j++) {
			cin >> b[j];
			if (b[j] > maxb)
				maxb = b[j];
		}

		
		if(maxb > maxa)
			cout << "MechaGodzilla" << endl;
		else
			cout << "Godzilla" << endl;
	}

	return 0;
}
