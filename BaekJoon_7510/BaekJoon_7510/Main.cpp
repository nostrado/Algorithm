#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(void) {
	int test_case = 0;
	int input = 0;
	vector<int> inputs;
	string result = "";

	cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> input;
			inputs.push_back(input);
		}
		sort(inputs.begin(), inputs.end());

		result += "Scenario #"; result += to_string(i + 1); result += ":\n";
		if (inputs.at(2) * inputs.at(2) == (inputs.at(0) * inputs.at(0)) + (inputs.at(1) * inputs.at(1))) {
			result += "yes\n";
		}
		else {
			result += "no\n";
		}
		result += "\n";
		inputs.clear();
	}

	cout << result;
}