/*
	- ACM 호텔(10250) / BaekJoon Online Judge
	- 2017.01.08
	- 작성자: solstar

	- 주어진 입력이 작아서 문제의 규칙을 그대로 구현만 해도 해결 가능한 문제이다.
	- 하지만, 층은 (n-1)%h+1, 방번호는 (n-1)/h+1 로 구하는 것이 더 현명하다.
*/
#include <iostream>

using namespace std;

int main(void) {
	int testcase = 0;
	int h = 0, w = 0, n = 0;
	int x = 1, y = 1;

	cin >> testcase;
	while (testcase-- > 0) {
		cin >> h >> w >> n;
		x = 1, y = 1;

		while (--n > 0) {
			y++;
			if (y > h) {
				y = 1;
				x++;
			}
		}

		cout << 100 * y + x << "\n";
	}

	return 0;
}