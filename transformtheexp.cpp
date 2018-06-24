#include <iostream>
using namespace std;

static char stack[400];
static int top = -1;

void push(char c) {
	stack[++top] = c;
}

char pop() {
	return stack[top--];
}

int main() {

	int t;
	char str[400];
	cin >> t;

	for (int j = 0; j < t; j++) {
		cin >> str;

		for (int i = 0; str[i] != '\0'; i++) {

			if (str[i] == '(') {
				continue;
			}
			else if (str[i] == ')') {
					cout << pop();
			}
			else if (str[i] == '+' || str[i] == '*' || str[i] == '-' || str[i] == '/' || str[i] == '^') {
				push(str[i]);
			}
			else {
				cout << str[i];
			}
		}
		cout << endl;
		top = -1;
	}
	return 0;
}
