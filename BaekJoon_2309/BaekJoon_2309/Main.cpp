/*
	- 일곱 난쟁이(2309) / BaekJoon Online Judge
	- 2016.12.06
	- 작성자: solstar

	- 설명
		9명 중에서 합이 100이되는 7명을 찾아야한다. 7명을 찾기 보다는 2명의 경우를 찾는게 빠르다.
		9명의 합에서 100을 빼면 가짜인 두 명의 합이된다.
		100을 뺀 값을 만들 수 있는 2명을 검색해서 출력에서 제외하면 결과를 얻을 수 있다.
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int input[9] = { 0 };
	int out[2] = { 0 };
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> input[i];
		sum += input[i];
	}

	sum = sum - 100;
	sort(input, input + 9);
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum == input[i] + input[j]) {
				out[0] = i;
				out[1] = j;
				break;
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		if (i != out[0] && i != out[1]) {
			cout << input[i] << "\n";
		}
	}

	return 0;
}