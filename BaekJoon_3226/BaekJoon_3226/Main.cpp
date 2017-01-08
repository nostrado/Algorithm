/*
	- 전화 요금(3226) / BaekJoon Online Judge
	- 2017.01.08
	- 작성자: solstar

	- 요금이 변경되는 구간에 대해 주의한다면 쉽게 해결이 가능하다.
	- 예를들면, 18:59 ~ 19:00는 분당 10원이고, 19:00 ~ 19:01은 분당 5원으로 고려한다.
	- 통화시간 만큼 시작시간에서 증가시키면서 요금을 계산하는 코드이다.
*/
#include <iostream>
#include <cstdio>

using namespace std;

int main(void) {
	int n = 0;
	int hh = 0;
	int mm = 0;
	int dd = 0;
	int price = 0;

	cin >> n;
	while (n-- > 0) {
		scanf_s("%d:%d %d", &hh, &mm, &dd);

		while (dd-- > 0) {
			if (hh >= 7 && hh <= 18) {
				price += 10;
			}
			else {
				price += 5;
			}

			if (mm == 59) {
				mm = 0;
				if (hh == 23) {
					hh = 0;
				}
				else {
					hh++;
				}
			}
			mm++;
		}
	}

	cout << price << "\n";

	return 0;
}