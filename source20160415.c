#include <stdio.h>

int main(void)
{
	int sum = 0, n;
	for (n = 0; sum + n < 10000; n++) // sum < 10000 일 경우 10000 직전에서 조건을 만족하므로 sum + n이 연산된다
	{
		sum = sum + n; // 세미콜론 ; 붙이기
	}
	printf("sum = %d\n", sum);
	printf("n = %d\n", n - 1); // -1 해주기


	int i = 1; // 변수 초기화 해주기
	while (i <= 100)
	{
		if (i % 3 == 0)
		printf("%d\t", i);
		i++;
	}


	int j, m = 1;
	for (j = 1; j <= 5; j++)
	{
		m = m * j;
		if (j != 5)
			printf("%d * ", j);
		else
			printf("%d = %d\n", j, m);
	}


	int multiply, k = 1;
	printf("몇단 : ");
	scanf("%d", &multiply); // % -> &
	while (k <= 10)
	{
		printf("%d * %d = %d\n", multiply, k, multiply * k);
		k++;
	}


	int score, sum = 0, ii;
	float mean;
	for (ii = 1; ii <= 5; ii++)
	{
		printf("점수 입력 : ");
		scanf("%d", &score);
		sum = sum + score; // score 변수를 다섯개 쓸 필요 없음
	}
	mean = sum / 5.0;
	printf("총합 : %d\n", sum);
	printf("평균 : %.2f\n", mean); // %d랑 %f 구별하기


	int jj = 1;
	char ch = 0;
	while (ch != '\n') // enter 키 이용하기, ch 먼저 초기화하기
	{
		scanf("%c", &ch);
		jj++;
	}
	printf("입력한 문자의 개수는 %d개\n", jj - 2);


	int kk, r;
	int fff;
	printf("몇층 : ");
	scanf("%d", &fff);
	for (kk = 1; kk <= fff; kk++)
	{
		for (r = 1; r <= kk; r++)
		{
			printf("*");
		}
		printf("\n");
	}


	int p, q, s, t;
	int ff;
	printf("몇층 : "); // 몇층 피라미드를 출력할 것인가
	scanf("%d", &ff);
	for (p = 1; p <= ff; p++)
	{
		q = 1, s = 1, t = 1;
		while (s <= ff + 1 - p)
		{
			printf(" ");
			s++;
		}
		while (q <= (2 * p - 1)) // 곱하기 기호 * 생략 불가
		{
			printf("*");
			q++;
		}
		while (t <= ff + 1 - p)
		{
			printf(" ");
			t++;
		}
		printf("\n");
	}

	return 0;
}