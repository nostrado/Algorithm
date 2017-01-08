/*
	- 부녀회장이 될테야(2775) / BaekJoon Online Judge
	- 2017.01.08
	- 작성자: solstar

	- 아파트를 표로 그려서 간단한 규칙을 찾아내면 해결 가능하다.
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