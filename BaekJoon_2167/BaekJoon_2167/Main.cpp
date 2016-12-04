/*
	- 2차원 배열의 합(2167) / BaekJoon Online Judge
	- 2016.12.04
	- 작성자: solstar

	- 동적계획법
		배열에 주어지는 값을 체워넣는것이 아니라 시작 위치에서 해당 위치까지의 직사각형 내의 값의 합을 체워넣으면 연산을 반복하지않고 빠르게 구할 수 있다.
		큰 직사각형에서 필요한 부분을 빼고 나머지 부분은 뺀다는 생각으로 결과를 계산한다.
*/
#include <iostream>

using namespace std;

int board[301][301] = { 0 };

int main(void) {
	int N = 0, M = 0, K = 0;
	int i = 0, j = 0, x = 0, y = 0;
	int input = 0;
	int result = 0;

	cin >> N >> M;
	for (int p = 1; p <= N; p++) {
		for (int q = 1; q <= M; q++) {
			cin >> input;
			board[p][q] = board[p - 1][q] + board[p][q - 1] - board[p - 1][q - 1] + input;
		}
	}

	cin >> K;
	while (K-- > 0) {
		result = 0;
		cin >> i >> j >> x >> y;
		result = board[x][y] - board[i - 1][y] - board[x][j - 1] + board[i - 1][j - 1];
		cout << result << "\n";
	}

	return 0;
}