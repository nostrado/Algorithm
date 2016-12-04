/*
	- 별찍기-5(2442) / BaekJoon Online Judge
	- 2016.12.04
	- 작성자: solstar

	- 그냥 공백이랑 별 수 세보고 규칙 세우면 되는 쉬운 문제.
*/
#include <iostream>

using namespace std;

int main(void) {
	int N = 0;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < (N - i); j++) {
			cout << " ";
		}
		for (int j = 0; j < (2 * i - 1); j++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}