/*
	- �����-5(2442) / BaekJoon Online Judge
	- 2016.12.04
	- �ۼ���: solstar

	- �׳� �����̶� �� �� ������ ��Ģ ����� �Ǵ� ���� ����.
*/
#include <iostream>

using namespace std;

int main(void) {
	int N = 0;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < (N - i); j++) {
			cout << " ";
		}
		for (int j = 0; j < (2 * i - 1); j++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}