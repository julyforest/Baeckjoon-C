#include <stdio.h>
int main() {

	//틀린 내코드
	int n1, n2, n3, money=0,big = 0;
	scanf_s("%d %d %d", &n1, &n2, &n3);
	
	if (n1 == n2 && n1 == n3) {
		money = 10000 + n1 * 1000;
	}
	else if (n1 == n2 && n1 != n3 || n2 == n3 && n2 != n1) {
		money = 1000 + n2 * 100;
	}
	else if (n1 != n2 && n2 != n3 && n1 != n3) {
		if (n1 > n2 && n1 > n3) big = n1;
		if (n2 > n1 && n2 > n3) big = n2;
		if(n3> n2 && n3 > n1) big = n3;
		money = big * 100;
	}
	printf("%d", money);

return 0; 
}