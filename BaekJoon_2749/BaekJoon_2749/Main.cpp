/*
	- 피보나치 수3 문제(2749) / BaekJoon Online Judge
	- 2016.11.25
	- 작성자: solstar

	- 피사노 주기: "피보나치 수를 임의의 K로 나눈 나머지는 항상 반복 주기를 갖는다."
		K가 10^n일 경우 피사노 주기는 15x10^(n-1) 이다.
*/

#include <iostream>

using namespace std;

const int mod = 1000000;
const int p = mod / 10 * 15;

int main(void) {
	long long f_1 = 0;
	long long f_2 = 1;
	long long result = 0;

	long long n = 0;

	cin >> n;
	if (n == 1) {
		result = 1;
	}

	for(int i=1;i<n%p;i++) {
		result = (f_1 + f_2) % mod;
		f_1 = f_2;
		f_2 = result;
	}
	cout << result << "\n";
	return 0;
}