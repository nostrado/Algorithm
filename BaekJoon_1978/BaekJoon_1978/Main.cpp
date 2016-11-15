#include <iostream>

using namespace std;

int main(void) {
	int N = 0;
	int input = 0;
	int result = 0;
	bool flag = true;
	int* numbers;

	cin >> N;
	numbers = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> numbers[i];
	}

	for (int i = 0; i < N; i++) {
		flag = true;
		if (numbers[i] == 1) {
			flag = false;
		}
		else {
			for (int j = 2; j < numbers[i]; j++) {
				if (numbers[i] % j == 0) {
					flag = false;
					break;
				}
			}
		}
		if (flag == true) {
			result++;
		}
	}

	cout << result << "\n";

	delete(numbers);
	return 0;
}