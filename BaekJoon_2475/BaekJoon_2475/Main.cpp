/*
	- ������(2475) / BaekJoon Online Judge
	- 2016.12.04
	- �ۼ���: solstar

	- �׳� ���ο� �� ������ ���� Ǯ�� ���� ������.
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