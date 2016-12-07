/*
	- ATM(11399) / BaekJoon Online Judge
	- 2016.12.08
	- 작성자: solstar

	- 그리디 알고리즘
		필요한 시간의 합의 최소를 구하려면 돈을 뽑는데에 시간이 가장 적은 순서로 뽑으면 된다.
*/
#include <iostream>
#include <algorithm>

using namespace std;

int man[1000];

int main(void) {
	int N = 0;
	int result = 0;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> man[i];
	}
	sort(man, man + N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			result += man[j];
		}
	}

	cout << result << "\n";

	return 0;
}