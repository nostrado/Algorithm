#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int test_case=0;
	int R = 0;
	string input = "";

	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		cin >> R >> input;
		for (unsigned int j = 0; j < input.size(); j++) {
			for (int k = 0; k < R; k++) {
				cout << input.at(j);
			}
		}
		cout << endl;
	}

	return 0;
}