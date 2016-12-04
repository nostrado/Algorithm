/*
	- 1, 2, 3 ���ϱ�(9095) / BaekJoon Online Judge
	- 2016.12.04
	- �ۼ���: solstar

	- ������ȹ��
		���� ����� ���� ������ ������ �Ʒ��� ����.
		number:	1	2	3	4	5	6	7	...
		result:	1	2	4	7	13	24	44	...
		���ϰ��� �ϴ� ���� N �̶� �Ҷ�, result[N] = result[N-1] + result[N-2] + result[N-3] ���� �� �� �ִ�.
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