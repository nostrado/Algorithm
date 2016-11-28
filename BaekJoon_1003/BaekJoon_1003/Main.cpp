/*
	- 피보나치 함수(1003) / BaekJoon Online Judge
	- 2016.11.28
	- 작성자: solstar

	- 원리: 다이나믹 프로그래밍
			(if n=0) 1 0  (if n=1) 0 1  (if n=2) 1 1 (if n=3) 1 2 (if n=4) 2 3 .....
			규칙에 따라 f[n] = f[n-2] + f[n-1] 이됨을 알 수 있고
			문제에서 n의 범위가 제한적이므로 미리 만들어 놓고 참조만 하면 빠르게 결과를 얻을 수 있다.
*/
#include <iostream>

using namespace std;

int main(void) {
	int T = 0;
	int N = 0;
	int arr[42] = { 1,0,1 };
	
	for (int i = 3; i < 42; i++) {
		arr[i] = arr[i - 2] + arr[i - 1];
	}

	cin >> T;
	while (T-- > 0) {
		cin >> N;
		cout << arr[N] << " " << arr[N + 1] << "\n";
	}

	return 0;
}