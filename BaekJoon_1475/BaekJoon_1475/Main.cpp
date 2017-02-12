/*
	- 방 번호(1475) / BaekJoon Online Judge
	- 2017.02.12
	- 작성자: solstar

	- 6과 9는 뒤집어서 사용할 수 있다. 6과 9의 등장 횟수만 조정하면 된다.
	- 모든 자릿수를 검사한 후에 가장 많이 등장한 수의 값이 필요한 세트의 수가 된다.
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