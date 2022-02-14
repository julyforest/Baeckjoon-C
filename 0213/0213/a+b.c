#include <stdio.h>
int main() {

	int i, t, a, b;
	scanf("%d", &t);

	for (i = 1; i <= t; i++) {
		scanf("%d %d", &a, &b);

		printf("%d\n", a + b);
	}

	return 0;
}

// 중첩 for문에서 내용이 같으면 하나로 생략해야한다.
//당연함;;;;;