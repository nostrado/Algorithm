/*
	- 설탕 배달(2839) / BaekJoon Online Judge
	- 2016.12.24
	- 작성자: solstar

	- 5kg 설탕이 들어갈 수 있는 최대 양에서 한 봉지씩 빼면서 주어진 양과 일치하는 3kg 설탕의 수를 센다.
	- 5kg 3kg로 만들어 질 수 없으면 반복문을 빠져나와서 -1 을 출력한다.
*/
#include <iostream>

using namespace std;

int main(void) {
	int a = 0, b = 0;
	int N = 0;

	cin >> N;
	a = N / 5;
	while (a >= 0) {
		if((N - 5 * a) % 3 == 0) {
			b = (N - 5 * a) / 3;
			cout << a + b << "\n";
			return 0;
		}
		a--;
	}
	cout << -1 << "\n";

	return 0;
}