#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

// void main(void) 이렇게 쓰면 return 0 을 안써도 됨
int main(void)
{	
	/* 주소 연산자 */
	int a = 1, b = 2;
	printf("변수 a의 값 = %d\n", a);
	printf("변수 b의 값 = %d\n", b);
	printf("변수 a의 주소 = %p\n", &a); // %p는 변수가 저장된 주소 출력 
	printf("변수 b의 주소 = %p\n", &b); // 앰퍼샌드(&) 반드시 붙이기


	/* feet 변환 */
	float a, b, feet = 30.48;
	printf("cm단위 입력 : ");
	scanf("%f", &a); // %, &
	b = a / feet;
	printf("입력한 값은 %.4f feet\n", b);


	/* 최댓값 구하기 */
	int a, b, c, max;
	printf("첫번째 숫자 입력 : ");
	scanf("%d", &a);
	printf("두번째 숫자 입력 : ");
	scanf("%d", &b);
	printf("세번째 숫자 입력 : ");
	scanf("%d", &c);
	max = (a >= b ? a : b);
	max = (max >= c ? max : c);
	// 다른방법
	// max = a >= b ? (a >= c ? a : c) : (b >= c ? b : c);
	printf("가장 큰 수는 %d\n", max);


	/* 지폐 개수 */
	int input, a1, b1, c1, d1;
	printf("금액 입력 : ");
	scanf("%d", &input);
	a1 = input / 50000;
	b1 = (input - a1 * 50000) / 10000;
	c1 = (input - a1 * 50000 - b1 * 10000) / 5000;
	d1 = (input - a1 * 50000 - b1 * 10000 - c1 * 5000) / 1000;
	// 다른 방법
	// b1 = (input % 50000) / 10000;
	// c1 = (input % 10000) / 5000;
	// d1 = (input % 5000) / 1000;
	printf("%d원은 5만원 %d개, 만원 %d개, 5천원 %d개, 천원 %d개\n", input, a1, b1, c1, d1);


	/* 정수 양음 판별 */
	int number;
	printf("정수를 입력하시오 : ");
	scanf("%d", &number);
	if (number > 0) {
		printf("입력된 정수는 양수입니다\n");
	}
	else if (number == 0) {
		printf("입력된 정수는 0입니다\n");
	}
	else {
		printf("입력된 정수는 음수입니다\n");
	}


	/* switch 구문 */
	char ch;
	ch = getchar();
	switch (ch)
	{
	case 'a':
	case 'A':
		printf("a 또는 A를 입력했습니다\n");
		break; // break를 지우면 아래 부분까지 출력됨
	default:
		printf("a, A 이외의 문자를 입력했습니다\n");
	}


	/* 1부터 n까지의 정수의 합 - while 문 */
	int i = 1, sum = 0, n;
	printf("양의 정수 n 입력 : ");
	scanf("%d", &n); // %, &
	printf("초기 : i가 %d일 때 sum은 %d\n", i, sum);
	while (i <= n) {
		printf("%d번째 반복문 시작\n", i);
		printf("연산 전 : i가 %d일 때 sum은 %d\n", i, sum);
		sum += i;
		i++;
		printf("연산 후 : i가 %d일 때 sum은 %d\n", i, sum);
	}
	printf("-----------------------------\n");
	printf("1에서 %d까지의 정수의 합은 %d\n", n, sum);

	return 0;
}

/*
변수명 의미있게 쓰기
bill_50000, bill_10000 등
*/