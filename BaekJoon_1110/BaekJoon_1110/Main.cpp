/*
	- ���ϱ� ����Ŭ(1110) / BaekJoon Online Judge
	- 2016.12.03
	- �ۼ���: solstar

	- ����
		�׳� ������ �־��� �������� �ݺ��ϴ� �ڵ带 �ۼ��ϸ� �ȴ�.
*/
#include <iostream>

using namespace std;

int main(void) {
	int N = 0;
	int temp1 = 0;
	int temp2 = 0;
	int temp3 = 0;
	int count = 0;

	cin >> N;
	temp1 = N / 10;
	temp2 = N % 10;
	while (true) {
		temp3 = (temp1 + temp2) % 10;
		count++;
		if (temp2 * 10 + temp3 == N) {
			break;
		}
		temp1 = temp2;
		temp2 = temp3;
	}

	cout << count << "\n";

	return 0;
}