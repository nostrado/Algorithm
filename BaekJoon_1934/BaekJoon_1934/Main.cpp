/*
	- 최소공배수(1934) / BaekJoon Online Judge
	- 2016.12.10
	- 작성자: solstar

	- 유클리드 호제법을 통해 최대 공약수를 구한다.
		최대 공약수를 사용하여 최소 공배수를 구한다.
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
	int N = 0;
	int a = 0, b = 0;
	int g = 0;

	cin >> N;
	while (N-- > 0) {
		cin >> a >> b;
		if (a >= b) {
			g = gcd(a, b);
		}
		else {
			g = gcd(b, a);
		}

		cout << a*b / g << "\n";
	}

	return 0;
}