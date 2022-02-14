#include <stdio.h>
int main() {

	int hour, min, time;
	scanf_s("%d %d", &hour, &min);
	scanf_s("%d", &time);

	hour += time / 60;
	min += time % 60;

	if (min >= 60) {
		hour++; //1만 ++하는 이유는 위에서 소요 시간을 60으로 나눈 몫을 이미 다 더해놨기 때문이다.
		min %= 60;
	}

	if (hour >= 24) {
		hour %= 24;
		
	}
	printf("%d %d\n", hour, min);
		return 0;
	}