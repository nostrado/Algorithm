#include <iostream>
#include <string>

using namespace std;

class Queue {
private:
	int space[20000];
	int index_back;
	int index_front;
	int size;

public:
	void initQueue() {
		index_back = 0;
		index_front = 0;
		size = 0;
	}

	void push(int num) {
		space[index_back] = num;
		index_back++;
		size++;
		if (index_back >= 20000) {
			index_back = 0;
		}
	}

	int pop() {
		if (size == 0) {
			return -1;
		}

		int result = space[index_front];
		size--;
		if (index_front >= 20000) {
			index_front = 0;
		}
		else {
			index_front++;
		}

		return result;
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

	int getFront() {
		if (size == 0) {
			return -1;
		}
		return space[index_front];
	}

	int getBack() {
		if (size == 0) {
			return -1;
		}
		return space[index_back-1];
	}
};

int main(void) {
	int input = 0;
	int N = 0;
	string cmd;
	Queue que;

	que.initQueue();
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> cmd;

		if (cmd.compare("push") == 0) {
			cin >> input;
			que.push(input);
		}
		else if (cmd.compare("pop") == 0) {
			cout << que.pop() << "\n";
		}
		else if (cmd.compare("size") == 0) {
			cout << que.getSize() << "\n";
		}
		else if (cmd.compare("empty") == 0) {
			cout << que.empty() << "\n";
		}
		else if (cmd.compare("front") == 0) {
			cout << que.getFront() << "\n";
		}
		else if (cmd.compare("back") == 0) {
			cout << que.getBack() << "\n";
		}
	}

	return 0;
}