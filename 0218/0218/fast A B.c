#include <stdio.h>
int main() {

	int a, b, T;
	scanf_s("%d", &T);
	

	for (int i = 1; i <= T; i++) {
		scanf_s("%d %d", &a, &b);
		printf("%d\n", a + b);
	}



	return 0;
}