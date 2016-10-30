#include <iostream>
#include <cstring>

int main(void) {
	int possible = 0;
	int waiting = 0;
	std::cin >> possible >> waiting;
	
	char** students = new char*[waiting];
	for (int i = 0; i < waiting; i++) {
		students[i] = new char[8];
		std::cin >> students[i];
	}
}