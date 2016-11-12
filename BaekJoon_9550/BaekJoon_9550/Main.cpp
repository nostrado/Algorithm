#include <iostream>

using namespace std;

int main(void) {
	int test_case = 0;
	int N = 0;
	int K = 0;
	int result = 0;
	int input = 0;

	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		cin >> N >> K;
		for (int j = 0; j < N; j++) {
			cin >> input;
			result += input / K;
		}
		cout << result << endl;
		result = 0;
	}
	
	return 0;
}