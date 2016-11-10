#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int test_case = 0;
	int score = 0;
	vector<int> scores;

	cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> score;
			scores.push_back(score);
		}
		sort(scores.begin(), scores.end());

		if (scores.at(3) - scores.at(1) >= 4) {
			cout << "KIN" << endl;
		}
		else {
			cout << scores.at(1) + scores.at(2) + scores.at(3) << endl;
		}
		scores.clear();
	}

	return 0;
}