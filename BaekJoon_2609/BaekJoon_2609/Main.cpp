/*
	- �ִ������� �ּҰ����(2609) / BaekJoon Online Judge
	- 2016.12.04
	- �ۼ���: solstar

	- �ִ�����: ��Ŭ���� ȣ����
	- �ּҰ����: A x B / gcd
*/
#include <iostream>

using namespace std;

int gcd(int a, int b) { // must a>b
	int mod = 0;
	if (b == 0) {
		return a;
	}
	mod = a%b;
	while (mod != 0) {
		a = b;
		b = mod;
		mod = a%b;
	}
	return b;
}

int main(void) {
	int a = 0, b = 0;
	int g = 0, l = 0;
	cin >> a >> b;

	if (a > b) {
		g = gcd(a, b);
	}
	else {
		g = gcd(b, a);
	}

	cout << g << "\n" << (a*b / g) << "\n";
	return 0;
}