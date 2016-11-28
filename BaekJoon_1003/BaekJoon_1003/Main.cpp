/*
	- �Ǻ���ġ �Լ�(1003) / BaekJoon Online Judge
	- 2016.11.28
	- �ۼ���: solstar

	- ����: ���̳��� ���α׷���
			(if n=0) 1 0  (if n=1) 0 1  (if n=2) 1 1 (if n=3) 1 2 (if n=4) 2 3 .....
			��Ģ�� ���� f[n] = f[n-2] + f[n-1] �̵��� �� �� �ְ�
			�������� n�� ������ �������̹Ƿ� �̸� ����� ���� ������ �ϸ� ������ ����� ���� �� �ִ�.
*/
#include <iostream>

using namespace std;

int main(void) {
	int T = 0;
	int N = 0;
	int arr[42] = { 1,0,1 };
	
	for (int i = 3; i < 42; i++) {
		arr[i] = arr[i - 2] + arr[i - 1];
	}

	cin >> T;
	while (T-- > 0) {
		cin >> N;
		cout << arr[N] << " " << arr[N + 1] << "\n";
	}

	return 0;
}