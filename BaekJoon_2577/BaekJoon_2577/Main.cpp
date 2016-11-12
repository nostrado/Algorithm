#include <iostream>

using namespace std;

int main(void) {
	int calc_int = 1;
	int input = 0;
	int result[10] = { 0 };

	for (int i = 0; i < 3; i++) {
		cin >> input;
		calc_int *= input;
	}

	while (calc_int > 0) {
		result[calc_int % 10]++;
		calc_int /= 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << result[i] << endl;
	}
}