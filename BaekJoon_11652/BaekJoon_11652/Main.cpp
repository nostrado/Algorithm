/*
	- ī��(11652) / BaekJoon Online Judge
	- 2016.12.20
	- �ۼ���: solstar

	- map�� key ���� ���� ����� �� ������������ ���ĵȴ�.
	- iterator�� map�� Ž���Ͽ� ���� �󵵰� ���� ���� key�� ����ϸ� �ȴ�.
*/
#include <map>
#include <iostream>

using namespace std;

map<long long, int> card;
map<long long, int>::iterator it;

int main(void) {
	long long input = 0;
	long long output = 0;
	int N = 0;
	int max = -1;

	cin >> N;
	while (N-- > 0) {
		cin >> input;
		card[input]++;
	}

	for (it = card.begin(); it != card.end(); it++) {
		if (max < it->second) {
			max = it->second;
			output = it->first;
		}
	}

	cout << output << "\n";

	return 0;
}