#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int test_case = 0;
	string input;
	int result = 0;
	int score = 0;

	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		cin >> input;
		for (unsigned int j = 0; j < input.size(); j++) {
			if (input.at(j) == 'O') {
				result += ++score;
			}
			else {
				score = 0;
			}
		}

		cout << result << endl;
		result = 0;
		score = 0;
	}

	return 0;
}