#include <iostream>

using namespace std;

int main(void) {
	int M = 0;
	int N = 0;
	int result_sum = 0;
	int result_min = 0;
	int i = 0, j = 0;

	cin >> M >> N;
	result_min = N;
	for (i = M; i <= N; i++) {
		for (j = 2; j <= i; j++) {
			if (i%j == 0) {
				break;
			}
		}

		if (i == j) {
			result_sum += i;
			if (result_min > i) {
				result_min = i;
			}
		}
	}

	if (result_sum == 0) {
		cout << -1 << "\n";
	}
	else {
		cout << result_sum << "\n" << result_min << "\n";
	}

	return 0;
}