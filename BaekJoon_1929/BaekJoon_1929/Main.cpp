#include <iostream>

using namespace std;

int main(void) {
	int M=0, N=0;
	bool flag = true;

	cin >> M >> N;
	if (M <= 2 && N != 1) {
		cout << 2 << "\n";
	}
	for (int i = 3; i <= N; i += 2) {
		if (i >= M) {
			for (int j = 3; j*j <= i; j += 2) {
				if (i%j == 0) {
					flag = false;
					break;
				}
			}
			if (flag != false) {
				cout << i << "\n";
			}
			else {
				flag = true;
			}
		}
	}

	return 0;
}