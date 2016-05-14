#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <stdlib.h> // rand 함수 사용
#include <time.h> // srand(time(NULL)) 사용

int square(int n);
int quadrant(float x, float y);
float root_test(float nn);

int main(void)
{
	char array_test01[7] = { 't', 'e', 's', 't', 'k', 'o', '\0' }; // 작은따옴표 사용, 마지막에 \0 안넣으면 이상하게 출력됨
	char array_test02[7] = "testko"; // 큰따옴표 사용, 마지막에 자동으로 \0 들어감
	printf("%s\n", array_test01);
	printf("%s\n", array_test02);

	///////////////////////////////

	int i, result;

	for (i = 0; i < 5; i++)
	{
		result = square(i);
		printf("%d\n", result);
	}

	///////////////////////////////

	float x, y;
	printf("x좌표 입력 : ");
	scanf("%f", &x);
	printf("y좌표 입력 : ");
	scanf("%f", &y);
	if (quadrant(x, y) <= 4)
		printf("제 %d 사분면 입니다\n", quadrant(x, y));
	else if (quadrant(x, y) == 5)
		printf("x축 위에 있습니다\n");
	else if (quadrant(x, y) == 6)
		printf("y축 위에 있습니다\n");
	else if (quadrant(x, y) == 7)
		printf("원점 입니다\n");

	///////////////////////////////

	printf("%f\n", root_test(16));

	///////////////////////////////

	double pi = 3.1415926535; // 삼각함수는 라디안 단위를 이용해서 출력
	double xx, yy;

	xx = pi / 2;
	yy = sin(xx);
	printf("sin( %f ) = %f\n", xx, yy);
	yy = sinh(xx);
	printf("sinh( %f ) = %f\n", xx, yy);
	yy = cos(xx);
	printf("cos( %f ) = %f\n", xx, yy);
	yy = cosh(xx);
	printf("cosh( %f ) = %f\n", xx, yy);

	///////////////////////////////

	int j, random;
	srand(time(NULL));
	for (j = 1; j <= 5; j++)
	{
		random = rand();
		printf("%d번째 난수 : %5d\n", j, random);
	}

	return 0;
}

int square(int n)
{
	return(n * n);
}

int quadrant(float x, float y)
{
	int num;
	if (x > 0 && y > 0)
		num = 1;
	else if (x < 0 && y > 0)
		num = 2;
	else if (x < 0 && y < 0)
		num = 3;
	else if (x > 0 && y < 0)
		num = 4;
	else if (x != 0 && y == 0) // ==과 =은 다름
		num = 5;
	else if (x == 0 && y != 0)
		num = 6;
	else if (x == 0 && y == 0)
		num = 7;

	return num;
}

float root_test(float nn)
{
	float root_result, temp;
	srand(time(NULL));
	while (1)
	{
		temp = (float)rand() / (float)rand();
		if (temp * temp == nn) {
			root_result = temp;
			break;
		}
	}
	return root_result;
}