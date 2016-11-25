/*
	- 피보나치 수 문제(2747,2748) / BaekJoon Online Judge
	- 2016.11.25
	- 작성자: solstar
*/

#include <iostream>

using namespace std;

int main(void) {
	long long f_1 = 0;
	long long f_2 = 1;

	int input = 0;
	long long result = 0;
	
	cin >> input;
	for (int i = 1; i < input; i++) {
		result = f_1 + f_2;
		f_1 = f_2;
		f_2 = result;
	}
	if (input == 1) {
		result = 1;
	}
	cout << result << "\n";

	return 0;
}