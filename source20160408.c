#include <stdio.h>

int main(void)
{
	int i = 0, j = 0;
	for (i = 0, j = 0; i + j < 20; i++, j++) // 세미콜론 ; 쓰지말기
	{
		printf("i=%d\nj=%d\n", i, j);
	}


	int i, n, oddsum = 0;
	printf("양의 정수 n을 입력하세요 : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) // 세미콜론 ; 쓰지말기
	{
		if (i % 2 == 0) // 짝수인지 판별하기
			continue;
		oddsum += i;
	}
	printf("n = %d, i = %d, oddsum = %d\n", n, i, oddsum);
	// 1부터 n까지의 수 중에서 홀수의 합 oddsum 을 출력


	int year;
	printf("연도 입력 : ");
	scanf("%d", &year);
	if (year % 4 == 0 && !(year % 100 == 0))
	{
		printf("%d년은 윤년입니다\n", year);
	}
	else if (year % 400 == 0)
	{
		printf("%d년은 윤년입니다\n", year);
	}
	else
	{
		printf("%d년은 윤년이 아닙니다\n", year);
	}


	int a;
	printf("숫자 입력 : ");
	scanf("%d", &a);
	if (a > 0)
		printf("양수\n");
	else if (a == 0)
		printf("영\n");
	else
		printf("음수\n");


	int score;
	printf("점수 입력 : ");
	scanf("%d", &score);
	if (score >= 90) // 한줄일 경우에는 중괄호 {} 안써도 됨
		printf("A\n");
	else if (score >= 80)
		printf("B\n");
	else if (score >= 70)
		printf("C\n");
	else if (score >= 60)
		printf("D\n");
	else
		printf("F\n");


	char c;
	int a, b;
	printf("연산자 입력 (+ or -) : ");
	scanf("%c", &c);
	printf("두 수 입력 (ex. 5 9) : ");
	scanf("%d %d", &a, &b); // & 빼먹지 말기
	if (c == '+') // = 기호 2개 쓰기 ==
		printf("%d + %d = %d\n", a, b, a + b);
	else if (c == '-')
		printf("%d - %d = %d\n", a, b, a - b);
	else
		printf("입력한 연산자가 올바르지 않습니다.\n");


	int won_i, won_f;
	printf("구매한 물품의 가격 입력 : ");
	scanf("%d", &won_i); // & 빼먹지 말기
	if (won_i < 30000 && won_i >= 0)
		won_f = won_i + 2500;
	else if (won_i >= 30000 && won_i < 50000)
		won_f = won_i; // 세미콜론 ; 빼먹지 말기
	else if (won_i >= 50000)
		won_f = won_i * 0.9;
	else
		printf("물품 가격이 올바르지 않습니다.\n");

	printf("최종 결제 금액은 \\ %d 입니다.\n", won_f);

	
	int score01, score02, score03;
	float mean;
	char grade;
	printf("첫번째 과목 점수 입력 : ");
	scanf("%d", &score01);
	printf("두번째 과목 점수 입력 : ");
	scanf("%d", &score02);
	printf("세번째 과목 점수 입력 : ");
	scanf("%d", &score03);
	
	mean = (score01 + score02 + score03) / 3.0; // 소수점 3.0 붙이기
	if (mean >= 90) // 한줄일 경우에는 중괄호 {} 안써도 됨
		grade = 'A';
	else if (mean >= 80)
		grade = 'B';
	else if (mean >= 70)
		grade = 'C';
	else if (mean >= 60)
		grade = 'D';
	else
		grade = 'F';

	printf("평균은 %.2f 등급은 %c\n", mean, grade);


	return 0;
}