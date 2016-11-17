#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void) {
	vector<int> stk;
	string result = "";
	int N = 0;
	int input = 0;
	int max = 0;

	cin >> N;
	stk.push_back(0);
	for (int i = 0; i < N; i++) {
		cin >> input;

		while (stk.back() < input) {
			stk.push_back(++max);
			result += "+\n";
		}

		while (stk.back() != input) {
			stk.pop_back();
			result += "-\n";
			if (stk.empty()) {
				result = "NO\n";
				break;
			}
		}

		if (stk.back() == input) {
			stk.pop_back();
			result += "-\n";
		}
	}

	cout << result;

	return 0;
}