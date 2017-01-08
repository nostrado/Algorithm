/*
	- ��ȭ ���(3226) / BaekJoon Online Judge
	- 2017.01.08
	- �ۼ���: solstar

	- ����� ����Ǵ� ������ ���� �����Ѵٸ� ���� �ذ��� �����ϴ�.
	- �������, 18:59 ~ 19:00�� �д� 10���̰�, 19:00 ~ 19:01�� �д� 5������ ����Ѵ�.
	- ��ȭ�ð� ��ŭ ���۽ð����� ������Ű�鼭 ����� ����ϴ� �ڵ��̴�.
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