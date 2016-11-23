#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Deque {
private:
	vector<int> space;
public:
	void push_front(int x) {
		space.insert(space.begin(), x);
	}

	void push_back(int x) {
		space.push_back(x);
	}

	int pop_front() {
		if (space.size() == 0) {
			return -1;
		}
		int result = space.front();
		space.erase(space.begin());
		return result;
	}

	int pop_back() {
		if (space.size() == 0) {
			return -1;
		}
		int result = space.back();
		space.pop_back();
		return result;
	}

	unsigned int getSize() {
		return space.size();
	}

	int isEmpty() {
		if (space.size() == 0) {
			return 1;
		}
		else {
			return 0;
		}
	}

	int getFront() {
		if (space.size() == 0) {
			return -1;
		}
		return space.front();
	}

	int getBack() {
		if (space.size() == 0) {
			return -1;
		}
		return space.back();
	}
};

int main(void) {
	Deque dq;
	int N = 0;
	int data = 0;
	string cmd;

	cin >> N;
	while (N-- > 0) {
		cin >> cmd;
		if (cmd.compare("push_front") == 0) {
			cin >> data;
			dq.push_front(data);
		}
		else if (cmd.compare("push_back") == 0) {
			cin >> data;
			dq.push_back(data);
		}
		else if (cmd.compare("pop_front") == 0) {
			cout << dq.pop_front() << "\n";
		}
		else if (cmd.compare("pop_back") == 0) {
			cout << dq.pop_back() << "\n";
		}
		else if (cmd.compare("size") == 0) {
			cout << dq.getSize() << "\n";
		}
		else if (cmd.compare("empty") == 0) {
			cout << dq.isEmpty() << "\n";
		}
		else if (cmd.compare("front") == 0) {
			cout << dq.getFront() << "\n";
		}
		else if (cmd.compare("back") == 0) {
			cout << dq.getBack() << "\n";
		}
		else {
			cout << "unKnown command\n";
		}
	}

	return 0;
}