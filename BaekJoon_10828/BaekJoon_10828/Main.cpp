#include <iostream>
#include <string>

using namespace std;

class Stack {
private:
	int space[20000];
	int index;
	int size;

public:
	void initStack() {
		index = 0;
		size = 0;
	}

	void push(int num) {
		space[index] = num;
		index++;
		size++;
	}

	int pop() {
		if (index == 0) {
			return -1;
		}
		index--;
		size--;
		return space[index];
	}

	int getSize() {
		return size;
	}

	int empty() {
		if (size == 0) {
			return 1;
		}
		else {
			return 0;
		}
	}

	int top() {
		if (index == 0) {
			return -1;
		}
		index--;
		return space[index++];
	}
};

int main(void) {
	int N = 0;
	int input = 0;
	string cmd;

	Stack stk;
	stk.initStack();

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> cmd;
		if (cmd.compare("push") == 0) {
			cin >> input;
			stk.push(input);
		}
		else if (cmd.compare("pop") == 0) {
			cout << stk.pop() << "\n";
		}
		else if (cmd.compare("size") == 0) {
			cout << stk.getSize() << "\n";
		}
		else if (cmd.compare("empty") == 0) {
			cout << stk.empty() << "\n";
		}
		else if (cmd.compare("top") == 0) {
			cout << stk.top() << "\n";
		}
	}

	return 0;
}