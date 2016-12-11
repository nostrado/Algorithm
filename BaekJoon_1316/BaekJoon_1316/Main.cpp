/*
	- 그룹 단어 체커(1316) / BaekJoon Online Judge
	- 2016.12.11
	- 작성자: solstar

	- 단어의 알파벳이 등장하는 순서를 가지고 그룹 단어를 체크하면 된다.
	- 알파벳이 처음 등장한 순서가 뒤에서 변경될 경우 그룹단어가 아니다.
	- 정말 순서를 가지고 판단하는 것으로 구현했다면 좀더 빠른 코드가 되었을 것 같다.
	- 아래의 코드는 vector를 가지고 해결한다. 다소 비효율적이고 메모리도 많이 차지한다.ㅠㅠㅠ
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool checkChar(vector<char> stk, char ch) {
	unsigned int size = stk.size();
	if (size == 0) {
		return false;
	}
	for (unsigned int i = 0; i < size-1; i++) {
		if (ch == stk.at(i)) {
			return true;
		}
	}
	return false;
}

int main(void) {
	string input;
	unsigned int str_len = 0;
	vector<char> stk;
	int N = 0;
	int result = 0;

	cin >> N;
	result = N;
	while (N-- > 0) {
		cin >> input;
		str_len = input.length();

		for (unsigned int i = 0; i < str_len; i++) {
			if (stk.empty() || (stk.back() != input.at(i) && checkChar(stk, input.at(i)) == false)) {
				stk.push_back(input.at(i));
			}
			else if (stk.back() != input.at(i) && checkChar(stk, input.at(i)) == true) {
				result--;
				break;
			}
			else {
				continue;
			}
		}

		stk.clear();
	}

	cout << result << "\n";

	return 0;
}