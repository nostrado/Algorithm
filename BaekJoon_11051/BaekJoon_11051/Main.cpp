/*
	- 이항 계수 2(11051) / BaekJoon Online Judge
	- 2016.11.26
	- 작성자: solstar

	- 파스칼의삼각형, 동적 계획법
	- 나머지 연산의 성질: 
							(a+b) mod n = (a mod n + b mod n) mod n (사용)
							(a-b) mod n = (a mod n - b mod n) mod n
							(axb) mod n = (a mod n x b mod n) mod n
*/

#include <iostream>
#include <algorithm>

using namespace std;

const long long mod = 10007;
int board[1001][1001];

int main(void) {
	int N = 0, K = 0;

	cin >> N >> K;
	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= min(i, K); j++) {
			if (j == 0 || j == i) {
				board[i][j] = 1;
			}
			else {
				board[i][j] = (board[i - 1][j - 1] + board[i - 1][j]) % mod;
			}
		}
	}

	cout << board[N][K] << "\n";
	return 0;
}