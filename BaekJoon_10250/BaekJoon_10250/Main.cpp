/*
	- ACM ȣ��(10250) / BaekJoon Online Judge
	- 2017.01.08
	- �ۼ���: solstar

	- �־��� �Է��� �۾Ƽ� ������ ��Ģ�� �״�� ������ �ص� �ذ� ������ �����̴�.
	- ������, ���� (n-1)%h+1, ���ȣ�� (n-1)/h+1 �� ���ϴ� ���� �� �����ϴ�.
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