/*
	- �Ӹ���� �����(1213) / BaekJoon Online Judge
	- 2017.1.1
	- �ۼ���: solstar

	- 1. �Է����� �־����� ���ڿ����� �� ���ĺ��� ���� �����Ѵ�.
	- 2. ��� ���ڿ��� ���ĺ� ������ ����� ���� ���ݸ� �����Ѵ�. ���ĺ� ���� Ȧ���� ��쿡�� ���� ���� �Ǿ�� �ϹǷ� �߰� ���ڷ� ���� �����Ѵ�.
	- 3. �߰��� �� ���ĺ��� 1���� �ʰ��ϸ� �Ӹ������ ������ �� �����Ƿ� �Ұ��� ������ ����ϰ� �����Ѵ�.
	- 4. �Ӹ������ �ȴٸ� �߰� ���ĺ��� ��� ���ڿ��� ������ �Ŀ� ���ĺ��� �������� ������ ���� ���ĺ��� �����ϸ� �Ӹ������ �ϼ��ȴ�.
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