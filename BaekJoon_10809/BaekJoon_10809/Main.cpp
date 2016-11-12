#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string input;
	int index = 0;
	int result[26] = { 0 };

	for (int i = 0; i < 26; i++) {
		result[i] = -1;
	}

	cin >> input;
	for (unsigned int i = 0; i < input.size(); i++) {
		index = input.at(i) - 'a';
		if (result[index] == -1) {
			result[index] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << result[i] << " ";
	}
	cout << endl;

	return 0;
}