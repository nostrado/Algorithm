/*
	- �����-6(2443) / BaekJoon Online Judge
	- 2016.12.04
	- �ۼ���: solstar

	- ����� ���� ��µǴ� ���� ����ؼ� ��Ģ�� ���ϸ� �ȴ�.
*/
#include <iostream>

using namespace std;

int main(void) {
	int N = 0;

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = 0; j < (2 * (N - i) - 1); j++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}