/*
	- �׷� �ܾ� üĿ(1316) / BaekJoon Online Judge
	- 2016.12.11
	- �ۼ���: solstar

	- �ܾ��� ���ĺ��� �����ϴ� ������ ������ �׷� �ܾ üũ�ϸ� �ȴ�.
	- ���ĺ��� ó�� ������ ������ �ڿ��� ����� ��� �׷�ܾ �ƴϴ�.
	- ���� ������ ������ �Ǵ��ϴ� ������ �����ߴٸ� ���� ���� �ڵ尡 �Ǿ��� �� ����.
	- �Ʒ��� �ڵ�� vector�� ������ �ذ��Ѵ�. �ټ� ��ȿ�����̰� �޸𸮵� ���� �����Ѵ�.�ФФ�
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