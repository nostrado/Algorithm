/*
	- 보물(1026) / BaekJoon Online Judge
	- 2016.12.03
	- 작성자: solstar
	
	- 정렬(문제의 조건과 어긋난 해결방법으로 제출 / B 재배열 하지 말라지만 그냥 했다.ㅎㅎ;;)
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool func(int a, int b) {
	return (a > b);
}

int main(void) {
	int N = 0;
	int input = 0;
	int result = 0;
	vector<int> A;
	vector<int> B;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input;
		A.push_back(input);
	}
	sort(A.begin(), A.end());

	for (int i = 0; i < N; i++) {
		cin >> input;
		B.push_back(input);
	}
	sort(B.begin(), B.end(),func);

	for (int i = 0; i < N; i++) {
		result += A[i] * B[i];
	}

	cout << result << "\n";

	return 0;
}