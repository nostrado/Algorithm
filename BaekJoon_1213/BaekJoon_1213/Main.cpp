/*
	- 팰린드롬 만들기(1213) / BaekJoon Online Judge
	- 2017.1.1
	- 작성자: solstar

	- 1. 입력으로 주어지는 문자열에서 각 알파벳의 수를 저장한다.
	- 2. 결과 문자열에 알파벳 순으로 저장된 수의 절반만 저장한다. 알파벳 수가 홀수인 경우에는 기준 점이 되어야 하므로 중간 문자로 따로 저장한다.
	- 3. 중간에 들어갈 알파벳이 1개를 초과하면 팰린드롬을 구성할 수 없으므로 불가능 문구를 출력하고 종료한다.
	- 4. 팰린드롬이 된다면 중간 알파벳을 출력 문자열에 연결한 후에 알파벳의 역순으로 나머지 수의 알파벳을 연결하면 팰린드롬이 완성된다.
*/
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int alph[26] = { 0 };
	string input;
	string output;
	string mid;
	int length = 0;
	int half = 0;
	char word = 0;

	cin >> input;
	length = input.length();
	for (int i = 0; i < length; i++) {
		alph[input.at(i) - 'A']++;
	}

	for (int i = 0; i < 26; i++) {
		if (alph[i] % 2 == 1) {
			alph[i]--;
			word = i + 'A';
			mid.push_back(word);
		}
		half = alph[i] / 2;
		alph[i] -= half;
		for (int j = 0; j < half; j++) {
			word = i + 'A';
			output.push_back(word);
		}
	}

	if (mid.length() > 1) {
		cout << "I'm Sorry Hansoo\n";
		return 0;
	}
	output.append(mid);

	for (int i = 25; i >= 0; i--) {
		for (int j = 0; j < alph[i]; j++) {
			word = i + 'A';
			output.push_back(word);
		}
	}
	cout << output << "\n";

	return 0;
}