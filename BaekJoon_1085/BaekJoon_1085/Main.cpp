/*
	- 직사각형에서 탈출(1085) / BaekJoon Online Judge
	- 2016.12.03
	- 작성자: solstar

	- 그냥 쉬운 문제였다. 새로운 언어를 처음 익힐 때 풀면 좋겠다.
*/
#include <iostream>

using namespace std;

int main(void) {
	int x = 0, y = 0;
	int w = 0, h = 0;
	int board[4] = { 0 };
	int result = 1001;

	cin >> x >> y >> w >> h;

	board[0] = x;
	board[1] = y;
	board[2] = w - x;
	board[3] = h - y;

	for (int i = 0; i < 4; i++) {
		if (result > board[i]) {
			result = board[i];
		}
	}

	cout << result << "\n";

	return 0;
}