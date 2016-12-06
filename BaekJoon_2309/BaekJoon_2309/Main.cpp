/*
	- �ϰ� ������(2309) / BaekJoon Online Judge
	- 2016.12.06
	- �ۼ���: solstar

	- ����
		9�� �߿��� ���� 100�̵Ǵ� 7���� ã�ƾ��Ѵ�. 7���� ã�� ���ٴ� 2���� ��츦 ã�°� ������.
		9���� �տ��� 100�� ���� ��¥�� �� ���� ���̵ȴ�.
		100�� �� ���� ���� �� �ִ� 2���� �˻��ؼ� ��¿��� �����ϸ� ����� ���� �� �ִ�.
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int input[9] = { 0 };
	int out[2] = { 0 };
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> input[i];
		sum += input[i];
	}

	sum = sum - 100;
	sort(input, input + 9);
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum == input[i] + input[j]) {
				out[0] = i;
				out[1] = j;
				break;
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		if (i != out[0] && i != out[1]) {
			cout << input[i] << "\n";
		}
	}

	return 0;
}