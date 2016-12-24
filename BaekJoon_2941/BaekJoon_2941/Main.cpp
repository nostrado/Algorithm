/*
	- 크로아티아 알파벳(2941) / BaekJoon Online Judge
	- 2016.12.24
	- 작성자: solstar

	- 문제에 주어진 크로아티아 알파벳을 조건문을 사용하여 검사하면 된다.
	- 검사할 때, 문자열 인덱스가 잘못된 메모리를 참조하지 않도록 주의한다.
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