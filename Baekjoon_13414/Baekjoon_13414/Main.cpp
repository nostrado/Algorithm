#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int N = 0;
int K = 0;
int next_size = 0;
int prev_size = 0;
string* students;
unordered_map<string, int> check_list;
vector<string> result;

int main(void) {
	cin >> K >> N;

	students = new string[N];
	for (int i = 0; i < N; i++) {
		cin >> students[i];
	}

	for (int i = N - 1; i >= 0; i--) {
		prev_size = next_size;
		check_list[students[i]] = 0;
		next_size = check_list.size();
		if (prev_size != next_size) {
			result.push_back(students[i]);
		}
	}

	for (int i = 0; i < K; i++) {
		cout << result.back() << endl;
		result.pop_back();
	}
}