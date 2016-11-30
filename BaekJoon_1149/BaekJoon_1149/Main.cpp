/*
	- RGB �Ÿ�(1149) / BaekJoon Online Judge
	- 2016.11.30
	- �ۼ���: solstar

	- ���� ��ȹ��(dynamic programming)
		���� ���� ��븸 ã�Ƽ� ���ذ��� Ž�� �˰����� �ڿ� �ּ� ���� �������� ���ϴ� ��찡 �߻��ϱ� ������ ����� �������� ���Ѵ�.
		�׷��� R,G,B ������ ��쿡 �߻��ϴ� �ּ� ����� ���ϰ� ���ؼ� ���� �����ؾ��Ѵ�.

		�� ����� �ּ� ����� ���� ��쿡 ������ �ּ� ���鿡 R,G,B ����� ���ϸ� ���� �� �ִ�.
		�Է��� 1�϶� �߻��ϴ� R,G,B�� �ּҺ���� �־����� �Է°� ����. �� �������ʹ� ��Ģ�� �°� ���س����� ���� �� ����� �ּ� ����� ���� �� �ִ�.(��ȭ��)
		Example)
			min_cost[N][R] = min(min_cost[N-1][G], min_cost[N-1][B]) + R;
			Red�� ĥ������ �߻��ϴ� �ּ� ����� ���ϴ� �����.
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int N = 0;
	int R = 0, G = 0, B = 0;
	int result;
	int** min_cost = NULL;

	cin >> N;
	if (N == 0) {
		cout << 0 << "\n";
		return 0;
	}
	min_cost = new int*[N];

	min_cost[0] = new int[3];
	cin >> min_cost[0][0] >> min_cost[0][1] >> min_cost[0][2];

	for (int i = 1; i < N; i++) {
		cin >> R >> G >> B;
		min_cost[i] = new int[3];

		min_cost[i][0] = min(min_cost[i - 1][1], min_cost[i - 1][2]) + R;
		min_cost[i][1] = min(min_cost[i - 1][0], min_cost[i - 1][2]) + G;
		min_cost[i][2] = min(min_cost[i - 1][0], min_cost[i - 1][1]) + B;
	}

	result = min_cost[N - 1][0];
	for (int i = 1; i < 3; i++) {
		if (result > min_cost[N - 1][i]) {
			result = min_cost[N - 1][i];
		}
	}

	cout << result << "\n";

	for (int i = 0; i < N; i++) {
		delete(min_cost[i]);
	}
	delete(min_cost);
	return 0;
}