/*
	- 순서쌍의 곱의 합(13900) / BaekJoon Online Judge
	- 2016.12.01
	- 작성자: solstar

	- (a+b+c+...+X)^2 = (a^2+b^2+c^2+...+X^2) + 2(순서 쌍의 조합들) -> 가장 빠른 방법

	- 아래의 코드는 배열을 10만개나 선언하지 않고, 입력되는 수를 인덱스로 사용하여 조합 규칙에 따라서 계산함.
	  Example)
		2 2 3 4 의 경우, 2x(2+3+4) + 2x(3+4) + (3x4) 의 방법으로 계산하여 결과를 찾음.
		먼저 소개한 방법으로 계산하는 것이 효율적이고 훨씬 빠름.
		고로, 난 잘해지려면 아직 한참 멀었음...ㅠㅠ
*/
#include <iostream>

using namespace std;

int numbers[10001] = { 0 };

int main(void) {
	int N = 0;
	int input = 0;
	long long result = 0;
	long long sum_pair = 0;

	cin >> N;
	while (N-- > 0) {
		cin >> input;
		numbers[input]++;
	}

	for (int i = 1; i < 10001; i++) {
		while (numbers[i] != 0) {
			for (int j = 1; j < numbers[i]; j++) {
				sum_pair += i;
			}
			for (int j = i + 1; j < 10001; j++) {
				sum_pair += (j*numbers[j]);
			}
			result += (i*sum_pair);
			sum_pair = 0;
			numbers[i]--;
		}
	}

	cout << result << "\n";

	return 0;
}