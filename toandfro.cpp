#include <iostream>
using namespace std;

static char a[30][30], str[200];

int getsize(char str[]) {
	int i;
	for (i = 0; str[i] != '\0'; i++);
	return i;
}

int main() {

	int col,row;
	cin >> row;

	while (row != 0) {

		cin >> str;
		col = (getsize(str) / row) ;
		int k = 0;
		for (int i = 0; i < col; i++) {
			for (int j = 0; j < row; j++) {
				if (i % 2 == 0)
					a[i][j] = str[k];
				else
					a[i][row - j - 1] = str[k];
				k = k + 1;
			}
		}

		for (int i = 0; i < row; i++) {

			for (int j = 0; j < col; j++) {
				cout << a[j][i];
			}
		}
		cout << endl;
		cin >> row;
	}
	return 0;
}
