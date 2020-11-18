
#include <iostream>

void printPrime(int n) {
	int i = 2, c = 0;
	if (n == 0)
		printf("Incerted number is 0\n");
	else {
		printf("%d", 2);
		while (c < (n - 1)) {
			for (int j = 2; j < i; j++) {
				if (i % j == 0)
					break;
				else if (i == j + 1) {
					printf(", %d", i);
					c++;
				}
			}
			i++;
		}
		printf("\nEnd\n");
	}
}

int main() {
	printPrime(80);
}