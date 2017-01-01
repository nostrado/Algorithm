/*
	- 방 배정(13300) / BaekJoon Online Judge
	- 2017.1.1
	- 작성자: solstar
	
	- 남,여 x 1~6학년 이라는 12가지 학생으로 분류할 수 있으며, 새로운 유형의 학생마다 방 수를 증가시키고
	- 방이 가득 차면 새로운 방이 필요해 진다는 생각으로 조건을 검사하면 빠르게 해결할 수 있다.
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