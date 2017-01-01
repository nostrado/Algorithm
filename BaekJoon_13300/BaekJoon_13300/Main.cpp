/*
	- �� ����(13300) / BaekJoon Online Judge
	- 2017.1.1
	- �ۼ���: solstar
	
	- ��,�� x 1~6�г� �̶�� 12���� �л����� �з��� �� ������, ���ο� ������ �л����� �� ���� ������Ű��
	- ���� ���� ���� ���ο� ���� �ʿ��� ���ٴ� �������� ������ �˻��ϸ� ������ �ذ��� �� �ִ�.
*/
#include <iostream>

using namespace std;

int main(void) {
	int student[2][6] = { 0 };
	int N = 0, K = 0;
	int male = 0, grade = 0;
	int result = 0;

	cin >> N >> K;
	while (N-- > 0) {
		cin >> male >> grade;
		if (student[male][grade - 1] == 0) {
			result++;
		}
		student[male][grade - 1]++;
		if (student[male][grade - 1] == K) {
			student[male][grade - 1] = 0;
		}
	}

	cout << result << "\n";

	return 0;
}