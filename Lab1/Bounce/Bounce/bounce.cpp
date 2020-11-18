
#include <iostream>

void bounce(int n) {
	if (n < 0)
		printf("\nERROR: input %d is a negative number\n", n);
	else {
		printf("Incerted number: %d\n", n);
		for (int i = -n; i <= n; i++) {
			if (i < 0)
				printf("%d ", -i);
			else if (i >= 0)
				printf("%d ", i);
		}
		printf("\n");
	}
}

int main() {
	bounce(5);
}