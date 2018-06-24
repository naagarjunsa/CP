#include <iostream>
using namespace std;

static int m[1000], f[1000];

int main() {

	int t,n,res = 0;
	cin >> t;

	for (int i = 0; i < t; i++) {

		cin >> n;
		for (int j = 0; j < n; j++)
			cin >> m[j];
		
		for (int j = 0; j < n; j++) {
			int minpos = j;
			for (int k = j; k < n; k++) {
				if (m[k] < m[minpos])
					minpos = k;
			}
			int temp = m[j];
			m[j] = m[minpos];
			m[minpos] = temp;
		}

		for (int j = 0; j < n; j++)
			cin >> f[j];

		for (int j = 0; j < n; j++) {
			int minpos = j;
			for (int k = j; k < n; k++) {
				if (f[k] < f[minpos])
					minpos = k;
			}
			int temp = f[j];
			f[j] = f[minpos];
			f[minpos] = temp;
		}
		
		for (int j = 0; j < n; j++)
			res += m[j] * f[j];

		cout << res << endl;
		res = 0;
	}
	return 0;
}
