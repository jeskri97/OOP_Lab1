
#include <iostream>

void pyramid(char c) {
	for (int i = 'A'; i <= c; i++) {
		for (int j = 'A'; j <= i; j++) {
			printf("%c", i);
		}
		printf("\n");
	}
}

void pyramid(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d", i);
		}
		printf("\n");
	}
}

int main() {
	char input;
	printf("Enter the uppercase charecter/number you whant to print in the last row: ");
	scanf_s("%c", &input);
	input = toupper(input);
	if (input >= 'A' && input <= 'Z')
		pyramid(input);
	else if (input >= '0' && input <= '9')
		pyramid(int(input - '0'));
	else
		printf("Invalid input\n");
}