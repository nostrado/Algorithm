/*
	- ũ�ξ�Ƽ�� ���ĺ�(2941) / BaekJoon Online Judge
	- 2016.12.24
	- �ۼ���: solstar

	- ������ �־��� ũ�ξ�Ƽ�� ���ĺ��� ���ǹ��� ����Ͽ� �˻��ϸ� �ȴ�.
	- �˻��� ��, ���ڿ� �ε����� �߸��� �޸𸮸� �������� �ʵ��� �����Ѵ�.
*/
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string word;
	int len_str = 0;
	int result = 0;

	cin >> word;
	len_str = word.length();
	result = len_str;

	for (int i = 0; i < len_str; i++) {
		if (i + 2 < len_str) {
			if (word.at(i) == 'c' && (word.at(i + 1) == '=' || word.at(i + 1) == '-')) {
				result--;
				i++;
			}
			else if (word.at(i) == 'z' && word.at(i + 1) == '=') {
				result--;
				i++;
			}
			else if (word.at(i) == 'd' && word.at(i + 1) == '-') {
				result--;
				i++;
			}
			else if (word.at(i) == 'l'&& word.at(i + 1) == 'j') {
				result--;
				i++;
			}
			else if (word.at(i) == 'n'&& word.at(i + 1) == 'j') {
				result--;
				i++;
			}
			else if (word.at(i) == 's' && word.at(i + 1) == '=') {
				result--;
				i++;
			}
			else if (word.at(i) == 'd' && word.at(i + 1) == 'z' && word.at(i + 2) == '=') {
				result -= 2;
				i += 2;
			}
		}
	}

	cout << result << "\n";
	
	return 0;
}