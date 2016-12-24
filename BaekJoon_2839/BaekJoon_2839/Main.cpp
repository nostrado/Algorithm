/*
	- ���� ���(2839) / BaekJoon Online Judge
	- 2016.12.24
	- �ۼ���: solstar

	- 5kg ������ �� �� �ִ� �ִ� �翡�� �� ������ ���鼭 �־��� ��� ��ġ�ϴ� 3kg ������ ���� ����.
	- 5kg 3kg�� ����� �� �� ������ �ݺ����� �������ͼ� -1 �� ����Ѵ�.
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