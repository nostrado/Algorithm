#include <iostream>
#include <string>

using namespace std;

string history = "";
int count_move = 0;

void move_block(int from, int to) {
	history += to_string(from);
	history += " ";
	history += to_string(to);
	history += "\n";
	count_move++;
}

void hanoi(int n, int from, int by, int to) {
	if (n == 1) {
		move_block(from, to);
	}
	else {
		hanoi(n - 1, from, to, by);
		move_block(from, to);
		hanoi(n - 1, by, from, to);
	}
}

int main(void) {
	int n;

	cin >> n;
	hanoi(n,1,2,3);

	cout << count_move << endl;
	cout << history;
}