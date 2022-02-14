#include <stdio.h>
int main() {

	int n;
	scanf_s("%d", &n);

	
	int e = 0;

		for (int i = 1; i <= n; i++) {
			e += i;
	}
		printf("%d", e);


	return 0;
}