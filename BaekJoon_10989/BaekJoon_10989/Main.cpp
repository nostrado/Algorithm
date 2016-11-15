#include <cstdio>

using namespace std;

int main(void) {
	int space[10001] = { 0 };
	int index = 0;
	int N = 0;

	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &index);
		space[index]++;
	}

	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < space[i]; j++) {
			printf("%d\n", i);
		}
	}

	return 0;
}