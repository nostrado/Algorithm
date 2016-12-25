/*
	- Fly me to the Alpha Centauri(1011) / BaekJoon Online Judge
	- 2016.12.25
	- 작성자: solstar
	
	- 마지막 이동이 반드시 1이어야 한다는 점이 문제의 힌트다.
	- 우주선은 계차수열의 형태로 이동거리가 증가한다. 단, 마지막 이동이 1이어야 한다는 조건을 만족하기 위해서
	- 일정 시점에서 이동가능거리는 1씩 감소해야한다. 즉, 중간의 어느 기점을 대칭으로 양쪽에서 한번씩 같은 거리로 증가시켜가며
	- 이동거리를 증가시키면 최소 이동 횟수를 구할 수 있다.

	- 문제에 주어진 조건을 그대로 적용하여 구현하면 시간초과가 발생하므로, 규칙을 찾아내는것이 중요하다.
*/
#include <iostream>

using namespace std;

int main(void) {
	long N = 0, x = 0, y = 0;
	long k = 0;
	long result = 0;
	long distance = 0;
	long ship = 0;
	bool flag = true;

	cin >> N;
	while (N-- > 0) {
		cin >> x >> y;
		distance = y - x;
		k = 1, ship = 0, result = 0, flag = true;

		while (ship < distance) {
			if (flag == true) {
				ship += k;
				flag = false;
				result++;
			}
			else {
				ship += k;
				flag = true;
				k++;
				result++;
			}
		}

		cout << result << "\n";
	}

	return 0;
}