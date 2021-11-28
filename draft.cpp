#include <iostream>

using namespace std;

int factorial(int x) {
	int result = 1;
	for (int i = 1; i <= x; i++) {
		result *= i;
	}
	return result;
}

void PascalTriangle(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			int C = factorial(i) / (factorial(i - j) * factorial(j));
			cout << C << " ";
		}
		cout << endl;
	}
}

int main() {
	int h;
	do {
		cout << "Enter height: ";
		cin >> h;
		if (h <= 0) {
			cout << "Invalid height." << endl;
		}
	} while (h <= 0);

	cout << "----Pascal Triangle----" << endl;
	PascalTriangle(h);

	system("pause");
	return 0;
}