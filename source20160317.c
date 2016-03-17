#include <stdio.h>

int main(void)
{
	int a; // 선언문
	a = 123; // 일반문
	// 일반적으로 선언문은 일반문보다 앞에 써야함
	float b = 3.14F;
	char c = 'S';
	char d[19] = "sourcetest20160317"; // 영어, 숫자는 1바이트
	char e[7] = "테스트"; // 한글은 2바이트 문자
	float sum = a + b;

	printf("a = %d\n", a);
	printf("b = %f\n", b);
	printf("c = %c\n", c);
	printf("d = %s\n", d);
	printf("e = %s\n", e);
	printf("a + b = %f\n", sum);

	return 0;
	// return 밑의 내용은 실행되지 않음
}