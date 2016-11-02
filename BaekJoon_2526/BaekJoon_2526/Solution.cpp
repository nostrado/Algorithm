#include <iostream>

int main(void) {
	int N, P;
	int result = 0;
	bool flag = false;
	int space[97];

	std::cin >> N >> P;

	space[0] = N;
	for (int i = 1;; i++) {
		space[i] = (space[i-1]*N) % P;

		for (int j = 0; j < i; j++) {
			if (space[j] == space[i]) {
				result = i - j;
				flag = true;
				break;
			}
		}

		if (flag == true) {
			std::cout << result;
			break;
		}
	}
}