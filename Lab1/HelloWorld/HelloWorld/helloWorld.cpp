
#include <iostream>

void helloWorldFor(int n) {
	for (int i = 0; i < n; i++) {
		std::cout << "Hello World!\n";
	}
}

void helloWorldWhile(int n) {
	while (n > 0) {
		std::cout << "Hello World!\n";
		n--;
	}
}

void helloWorldDoWhile(int n) {
	do {
		std::cout << "Hello World!\n";
		n--;
	} while (n > 0);
}
int main() {
	bool programOn = true;
	while (programOn) {
		int i, n;
		std::cout	<< "\nChoose a Hello World Function\n"
					<< "1: For Loop\n"
					<< "2: While Loop\n"
					<< "3: Do While Loop\n"
					<< "4: End\n\n"
					<< "Input: ";
		std::cin	>> n;

		switch (n)
		{
		case 1:
			std::cout << "\nEnter a Number: ";
			std::cin >> i;
			helloWorldFor(i);
			break;
		case 2:
			std::cout << "\nEnter a Number: ";
			std::cin >> i;
			helloWorldWhile(i);
			break;
		case 3:
			std::cout << "\nEnter a Number: ";
			std::cin >> i;
			helloWorldDoWhile(i);
			break;
		case 4:
			programOn = false;
			break;
		default:
			std::cout << "\nNot a valid Option\n";
			break;
		}
	}
}