#include <iostream>

using namespace std;

int main(void) {
	int input = 0;
	int calc = 0;
	int increase = 1;
	int count = 0;
	int flag = 1;

	cin >> input;

	while (calc < input) {
		calc = calc + increase++;
		count++;

		if (flag == 0)
			flag = 1;
		else
			flag = 0;
	}

	if (flag == 1) {
		cout << count - (calc - input) << '/' << calc - input + 1 << endl;
	}
	else {
		cout << calc - input + 1 << '/' << count - (calc - input) << endl;
	}

	return 0;
}