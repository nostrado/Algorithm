/*
	- 별찍기-6(2443) / BaekJoon Online Judge
	- 2016.12.04
	- 작성자: solstar

	- 공백과 별이 출력되는 수를 사용해서 규칙을 구하면 된다.
*/
#include <iostream>

using namespace std;

int main(void) {
	int N = 0;

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = 0; j < (2 * (N - i) - 1); j++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}