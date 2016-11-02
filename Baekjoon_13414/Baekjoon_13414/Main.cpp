#include <iostream>
#include <cstring>

struct Student {
	char number[9];
	int order;
};

int main(void) {
	int possible = 0;
	int waiting = 0;
	int index = 0;
	char input_str[9];
	Student* list = new Student[500000];

	std::cin >> possible >> waiting;

	for (int i = 0; i < waiting; i++) {
		std::cin >> input_str;
		index = atoi(input_str) % 500000;

		if (!strcmp(list[index].number, input_str)) {
			if (list[index].order <= possible) {
				possible++;
			}
			list[index].order = i+1;
		}
		else {
			if (list[index].order <= 0) {
				strcpy_s(list[index].number, 9, input_str);
				list[index].order = i+1;
			}
			else if(i<possible) { // 허용 범위에는 들어가지만 다른곳에 저장되어야 하는 경우
				for (int j = 0; j < 500000; j++) {
					if (list[j].order <= 0) {
						index = j;
						break;
					}
				}
				strcpy_s(list[index].number, 9, input_str);
				list[index].order = i + 1;
			}
		}
	}

	for (int i = 0; i < 500000; i++) {
		if (list[i].order > 0 && list[i].order <= possible) {
			std::cout << list[i].number << std::endl;
		}
	}

	delete(list);
}