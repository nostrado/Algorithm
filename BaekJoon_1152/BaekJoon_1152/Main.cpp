#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string input;
	int result = 0;
	unsigned int length = 0;

	getline(cin, input);
	length = input.size();
	for (unsigned int i = 0; i < length; i++) {
		if (input.at(i) == ' ' && i != 0) {
			result++;
		}
	}

	if (input.at(length - 1) == ' ') {
		std::cout << result << endl;
	}
	else {
		std::cout << result + 1 << endl;
	}

	return 0;
}