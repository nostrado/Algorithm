#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int N = 0;
	int input = 0;
	vector<int> numbers;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input;
		numbers.push_back(input);
	}

	sort(numbers.begin(), numbers.end());

	for (int i = 0; i < N; i++) {
		cout << numbers.at(i) << "\n";
	}

	return 0;
}