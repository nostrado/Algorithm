/*
	- 이항 계수 1(11050) / BaekJoon Online Judge
	- 2016.11.26
	- 작성자: solstar

	- 이항계수 정의
			C(n,k) = n! / n!(n-k)! if(0<=k<=n)
*/
#include <iostream>

using namespace std;

int getFactorial(int num) {
	if (num == 0) {
		return 1;
	}
	int result = num;
	while (--num > 0) {
		result *= num;
	}
	return result;
}

int main(void) {
	int N = 0, K = 0;
	cin >> N >> K;
	cout << getFactorial(N) / (getFactorial(K) * getFactorial(N - K)) << "\n";

	return 0;
}