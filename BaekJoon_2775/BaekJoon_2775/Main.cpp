/*
	- �γ�ȸ���� ���׾�(2775) / BaekJoon Online Judge
	- 2017.01.08
	- �ۼ���: solstar

	- ����Ʈ�� ǥ�� �׷��� ������ ��Ģ�� ã�Ƴ��� �ذ� �����ϴ�.
*/
#include <iostream>

using namespace std;

int main(void) {
	int Apartment[15][15] = { 0 };
	int testcase = 0;
	int n = 0, k = 0;

	for (int i = 0; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			if (i == 0) {
				Apartment[i][j] = j;
			}
			else {
				Apartment[i][j] = Apartment[i - 1][j] + Apartment[i][j - 1];
			}
		}
	}
	
	cin >> testcase;
	while (testcase-- > 0) {
		cin >> k >> n;
		cout << Apartment[k][n] << "\n";
	}

	return 0;
}