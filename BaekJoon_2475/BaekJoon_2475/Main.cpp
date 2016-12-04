/*
	- 검증수(2475) / BaekJoon Online Judge
	- 2016.12.04
	- 작성자: solstar

	- 그냥 새로운 언어에 적응할 때나 풀면 좋은 문제다.
*/
#include <iostream>

using namespace std;

int main(void) {
	int input = 0;
	int result = 0;

	for (int i = 0; i < 5; i++) {
		cin >> input;
		result += input*input;
	}

	cout << result % 10 << "\n";

	return 0;
}