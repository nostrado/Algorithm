/*
	- ATM(11399) / BaekJoon Online Judge
	- 2016.12.08
	- �ۼ���: solstar

	- �׸��� �˰���
		�ʿ��� �ð��� ���� �ּҸ� ���Ϸ��� ���� �̴µ��� �ð��� ���� ���� ������ ������ �ȴ�.
*/
#include <iostream>
#include <algorithm>

using namespace std;

int man[1000];

int main(void) {
	int N = 0;
	int result = 0;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> man[i];
	}
	sort(man, man + N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			result += man[j];
		}
	}

	cout << result << "\n";

	return 0;
}