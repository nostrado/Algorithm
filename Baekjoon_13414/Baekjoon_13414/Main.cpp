#include <vector>
#include <unordered_map>
#include <cstdio>
#include <iostream>

using namespace std;

int main(void) {
	int N = 0;
	int K = 0;
	unsigned int next_size = 0;
	unsigned int prev_size = 0;
	int student = 0;
	unordered_map<int, int> check_list;
	vector<int> result;
	vector<int> students;

	cin >> K >> N;

	for (int i = 0; i < N; i++) {
		cin >> student;
		students.push_back(student);
	}

	for (int i = N - 1; i >= 0; i--) {
		prev_size = next_size;
		check_list[students.at(i)] = 1;
		next_size = check_list.size();
		if (prev_size != next_size) {
			result.push_back(students.at(i));
		}
	}

	for (int i = 0; i < K; i++) {
		if (!result.empty()) {
			printf("%08d\n", result.back());
			result.pop_back();
		}
	}

	return 0;
}