/*
	- �������� ���� ��(13900) / BaekJoon Online Judge
	- 2016.12.01
	- �ۼ���: solstar

	- (a+b+c+...+X)^2 = (a^2+b^2+c^2+...+X^2) + 2(���� ���� ���յ�) -> ���� ���� ���

	- �Ʒ��� �ڵ�� �迭�� 10������ �������� �ʰ�, �ԷµǴ� ���� �ε����� ����Ͽ� ���� ��Ģ�� ���� �����.
	  Example)
		2 2 3 4 �� ���, 2x(2+3+4) + 2x(3+4) + (3x4) �� ������� ����Ͽ� ����� ã��.
		���� �Ұ��� ������� ����ϴ� ���� ȿ�����̰� �ξ� ����.
		���, �� ���������� ���� ���� �־���...�Ф�
*/
#include <iostream>

using namespace std;

int numbers[10001] = { 0 };

int main(void) {
	int N = 0;
	int input = 0;
	long long result = 0;
	long long sum_pair = 0;

	cin >> N;
	while (N-- > 0) {
		cin >> input;
		numbers[input]++;
	}

	for (int i = 1; i < 10001; i++) {
		while (numbers[i] != 0) {
			for (int j = 1; j < numbers[i]; j++) {
				sum_pair += i;
			}
			for (int j = i + 1; j < 10001; j++) {
				sum_pair += (j*numbers[j]);
			}
			result += (i*sum_pair);
			sum_pair = 0;
			numbers[i]--;
		}
	}

	cout << result << "\n";

	return 0;
}