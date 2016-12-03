/*
	- ��� ������(2579) / BaekJoon Online Judge
	- 2016.12.03
	- �ۼ���: solstar

	- ���� ��ȹ��
		�־��� ��Ģ�� �°� 2���� ����� ǥ�� �׷����� ��Ģ�� ã�� �� �ִ�.
		input:	10	20	15	25	10	20
		case1:	10	30	35	50	65	65
		case2:	0	20	25	55	45	75

		* case1 -> ���� ��ܿ� �� ��� ������� �� �� �ִ� ���
		* case2 -> ���� ��ܿ� �� ��� ������� �� �� �ִ� ���
*/
#include <iostream>
#include <algorithm>

using namespace std;

int score[300][2] = { 0 };

int main(void) {
	int N = 0, input = 0;
	
	cin >> N >> input;
	score[0][0] = input;
	score[0][1] = 0;
	if (N == 1) {
		cout << input << "\n";
		return 0;
	}
	cin >> input;
	score[1][0] = score[0][0] + input;
	score[1][1] = input;

	for (int i = 2; i < N; i++) {
		cin >> input;
		score[i][0] = score[i - 1][1] + input;
		score[i][1] = max(score[i - 2][0], score[i - 2][1]) + input;
	}

	if (score[N - 1][0] > score[N - 1][1]) {
		cout << score[N - 1][0] << "\n";
	}
	else {
		cout << score[N - 1][1] << "\n";
	}

	return 0;
}