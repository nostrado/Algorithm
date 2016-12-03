/*
	- 계단 오르기(2579) / BaekJoon Online Judge
	- 2016.12.03
	- 작성자: solstar

	- 동적 계획법
		주어진 규칙에 맞게 2가지 경우의 표를 그려보면 규칙을 찾을 수 있다.
		input:	10	20	15	25	10	20
		case1:	10	30	35	50	65	65
		case2:	0	20	25	55	45	75

		* case1 -> 현재 계단에 한 계단 상승으로 올 수 있는 경우
		* case2 -> 현재 계단에 두 계단 상승으로 올 수 있는 경우
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