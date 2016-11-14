#include <iostream>

using namespace std;

int main(void) {
	int input = 0;

	int x_next = 1;
	int x_prev = 1;
	int result = 0;

	cin >> input;
	if (input == 1) {
		cout << 1 << endl;
		return 0;
	}

	while (x_next < input) {
		x_prev = x_next;
		x_next = x_prev + 6 * result;
		result++;
	}

	cout << result << endl;

	return 0;
}