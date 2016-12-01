/*
	- 숫자삼각형(1932) / BaekJoon Online Judge
	- 2016.12.01
	- 작성자: solstar

	- 동적계획법(Dynamic Programming)
		입력으로 주어지는 숫자들에 대하여 이전의 값들과의 관계를 통해서 값을 찾아 나간다.
		마지막 줄의 가장 큰 숫자가 정답.
*/
#include <iostream>
#include <algorithm>

using namespace std;

unsigned int board[500][500] = { 0 };

int main(void) {
	int N = 0;
	int input = 0;
	unsigned int max_result = 0;

	cin >> N;
	cin >> board[0][0];
	for (int i = 1; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> input;

			if (j == 0) {
				board[i][j] = board[i - 1][j] + input;
			}
			else if (j ==  i) {
				board[i][j] = board[i-1][j-1] + input;
			}
			else {
				board[i][j] = max(board[i - 1][j - 1], board[i - 1][j]) + input;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		if (max_result < board[N - 1][i]) {
			max_result = board[N - 1][i];
		}
	}

	cout << max_result << "\n";

	return 0;
}