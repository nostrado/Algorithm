/*
	- RGB 거리(1149) / BaekJoon Online Judge
	- 2016.11.30
	- 작성자: solstar

	- 동적 계획법(dynamic programming)
		가장 작은 비용만 찾아서 더해가는 탐욕 알고리즘은 뒤에 최소 값을 선택하지 못하는 경우가 발생하기 때문에 결과를 보장하지 못한다.
		그래서 R,G,B 각각의 경우에 발생하는 최소 비용을 구하고 비교해서 값을 도출해야한다.

		각 경우의 최소 비용은 이전 경우에 구해진 최소 비용들에 R,G,B 비용을 더하면 구할 수 있다.
		입력이 1일때 발생하는 R,G,B의 최소비용은 주어지는 입력과 같다. 그 다음부터는 규칙에 맞게 구해나가다 보면 각 경우의 최소 비용을 구할 수 있다.(점화식)
		Example)
			min_cost[N][R] = min(min_cost[N-1][G], min_cost[N-1][B]) + R;
			Red로 칠햇을때 발생하는 최소 비용을 구하는 관계식.
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