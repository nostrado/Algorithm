/*
	- 1, 2, 3 더하기(9095) / BaekJoon Online Judge
	- 2016.12.04
	- 작성자: solstar

	- 동적계획법
		작은 경우의 수로 수열을 만들어보면 아래와 같다.
		number:	1	2	3	4	5	6	7	...
		result:	1	2	4	7	13	24	44	...
		구하고자 하는 수를 N 이라 할때, result[N] = result[N-1] + result[N-2] + result[N-3] 임을 알 수 있다.
*/
#include <iostream>

using namespace std;

int board[11] = { 0 };

int main(void) {
	int tc = 0;
	int n = 0;

	board[0] = 1;
	board[1] = 2;
	board[2] = 4;
	for (int i = 3; i < 11; i++) {
		board[i] = board[i - 1] + board[i - 2] + board[i - 3];
	}

	cin >> tc;
	while (tc-- > 0) {
		cin >> n;
		cout << board[n - 1] << "\n";
	}

	return 0;
}