#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isPalindrome(string str) {
	int str_len = str.size();
	for (int i = 0; i < str_len / 2; i++) {
		if (str.at(i) != str.at((str_len - 1) - i)) {
			return false;
		}
	}
	return true;
}

int main(void) {
	int T = 0;
	int K = 0;
	bool stop_flag = false;
	string word = "";
	vector<string> words;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> K;
		stop_flag = false;
		for (int j = 0; j < K; j++) {
			cin >> word;
			words.push_back(word);
		}

		for (int j = 0; j < K; j++) {
			for (int k = j+1; k < K; k++) {
				// Case ababa + ba
				word = words[j];
				word += words[k];
				if (isPalindrome(word)) {
					cout << word << "\n";
					stop_flag = true;
					break;
				}
				
				// Case ba + ababa
				word = words[k];
				word += words[j];
				if (isPalindrome(word)) {
					cout << word << "\n";
					stop_flag = true;
					break;
				}
			}
			if (stop_flag == true) {
				break;
			}
		}

		if (stop_flag == false) {
			cout << 0 << "\n";
		}

		words.clear();
	}

	return 0;
}