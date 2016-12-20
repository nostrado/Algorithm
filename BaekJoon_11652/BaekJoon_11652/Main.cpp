/*
	- 카드(11652) / BaekJoon Online Judge
	- 2016.12.20
	- 작성자: solstar

	- map은 key 값에 의해 저장될 때 오름차순으로 정렬된다.
	- iterator로 map을 탐색하여 등장 빈도가 가장 높은 key를 출력하면 된다.
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