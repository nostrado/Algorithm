/*
	- �� ��ȣ(1475) / BaekJoon Online Judge
	- 2017.02.12
	- �ۼ���: solstar

	- 6�� 9�� ����� ����� �� �ִ�. 6�� 9�� ���� Ƚ���� �����ϸ� �ȴ�.
	- ��� �ڸ����� �˻��� �Ŀ� ���� ���� ������ ���� ���� �ʿ��� ��Ʈ�� ���� �ȴ�.
*/
#include <iostream>

using namespace std;

int main(void) {
	int numbers[10] = { 0 };
	int input = 0;
	int number69 = 0;
	int output = 0;

	cin >> input;
	while (input > 9) {
		numbers[input % 10]++;
		input /= 10;
	}
	numbers[input]++;

	number69 = numbers[6] + numbers[9];
	numbers[6] = numbers[9] = number69 / 2;
	if (number69 % 2 != 0) {
		numbers[6]++;
		numbers[9]++;
	}

	for (int i = 0; i < 10; i++) {
		if (output < numbers[i]) {
			output = numbers[i];
		}
	}
	cout << output << "\n";

	return 0;
}