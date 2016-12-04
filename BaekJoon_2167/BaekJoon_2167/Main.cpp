/*
	- 2���� �迭�� ��(2167) / BaekJoon Online Judge
	- 2016.12.04
	- �ۼ���: solstar

	- ������ȹ��
		�迭�� �־����� ���� ü���ִ°��� �ƴ϶� ���� ��ġ���� �ش� ��ġ������ ���簢�� ���� ���� ���� ü�������� ������ �ݺ������ʰ� ������ ���� �� �ִ�.
		ū ���簢������ �ʿ��� �κ��� ���� ������ �κ��� ���ٴ� �������� ����� ����Ѵ�.
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