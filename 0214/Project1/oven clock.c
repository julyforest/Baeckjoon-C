#include <stdio.h>
int main() {

	int hour, min, time;
	scanf_s("%d %d", &hour, &min);
	scanf_s("%d", &time);

	hour += time / 60;
	min += time % 60;

	if (min >= 60) {
		hour++; //1�� ++�ϴ� ������ ������ �ҿ� �ð��� 60���� ���� ���� �̹� �� ���س��� �����̴�.
		min %= 60;
	}

	if (hour >= 24) {
		hour %= 24;
		
	}
	printf("%d %d\n", hour, min);
		return 0;
	}