#include <stdio.h>

/* 이름만 설명 */
int test123(int);

int main(void)
{
	
	int a = 5;
	int b = 7;
	printf("a = %d \nb = %d \n", a, b);
	b = test123(a);
	printf("a = %d \nb = %d \n", a, b);
	b = test123(b);
	printf("a = %d \nb = %d \n", a, b);
	
	printf("안녕하세요\ntest\n");
	return 0;
}

/* 위에서 이름을 말한 함수를 밑에서 설명 */

int test123(int num)
{
	num = num * 4;
	return num;
}
