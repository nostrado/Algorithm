#include <iostream>

using namespace std;

int main(void) {
	int* input;
	int* lis;
	int N = 0;
	int max = 0;
	int result = 0;

	cin >> N;
	input = new int[N];
	lis = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> input[i];
	}

	lis[0] = 0;
	for (int i = 0; i < N; i++) {
		max = 0;
		for (int j = 0; j < i; j++) {
			if (input[i] > input[j]) {
				if (max < lis[j]) {
					max = lis[j];
				}
			}
		}
		lis[i] = max + 1;
		if (result < lis[i]) {
			result = lis[i];
		}
	}

	cout << result;

	delete(input);
	delete(lis);
	return 0;
}