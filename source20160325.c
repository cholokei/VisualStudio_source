#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	/* 아스키 코드 보기 */
	printf("%c %d\n", 'A', 'A'); // 문자(...아스키 코드) 표현시 반드시 '작은따옴표' 쓰기
	printf("%c %d\n", 'B', 'B'); // 그렇지 않으면 변수 자체로 인식함
	printf("%c %d\n", 'a', 'a'); //
	printf("%c %d\n", 'b', 'b');
	printf("%c %d\n", '1', '1');
	printf("%c %d\n", '2', '2');
	// 숫자 자체를 문자(%c)로 출력시 아스키 코드값에 대응하는 문자 출력됨
	printf("%c %d\n", 65, 65);


	/* 서식문자를 이용한 출력 */
	char ch1 = 'A';
	char ch2 = 0x41;
	char ch3;
	printf("ch1 = %c, %d, %o, %x\n", ch1, ch1, ch1, ch1);
	printf("ch2 = %c, %d, %o, %x\n", ch2, ch2, ch2, ch2);
	printf("ch3 = %c, %d, %o, %x\n", ch3, ch3, ch3, ch3);


	/* 삼각형 넓이 구하기 */
	float width, height, area;
	printf("밑변의 길이를 입력하세요 : ");
	scanf("%f", &width); // & 빼먹지 말기, scanf 함수에는 \n 되도록 사용하지 말기
	printf("높이를 입력하세요 : ");
	scanf("%f", &height);
	printf("\n밑변(%f) X 높이(%f) X 1/2\n", width, height);
	area = width * height * (float)1 / 2; // 1/2 계산시 0으로 나오는 것을 막으려면 실수로 인식시켜야함
	// 다른방법 : area = width * height / 2;
	printf("삼각형의 넓이 = %f\n", area);


	int val1 = 5;
	int val2 = 3;
	val1 += 2;
	// 다른방법 : val1 = val1 + 2;
	printf("val1 = %d\n", val1);
	val1 += val2;
	// 다른방법 : val1 = val1 + val2;
	printf("val1 = %d\n", val1);


	int val = 5;
	printf("val : %d\n", val++);
	// ++ 기호가 뒤에 붙을 경우 우선 val값 출력 후에 그 다음에 val+1 저장
	//printf("val : %d\n", val);
	//val = val + 1;

	printf("val : %d\n", ++val);
	// ++ 기호가 앞에 붙을 경우 val값 출력 이전에 val+1
	//val = val + 1;
	//printf("val : %d\n", val);
	

	/* 논리 연산자의 단축 평가 */
	int x = 5, y = 10, z;
	// OR || 둘 중 하나만 참이면 무조건 참, 앞이 참이면 뒷부분은 계산되지 않음
	z = (x += 2) || (y += 1); // 식 (x += 2)가 참이므로 이부분은 단축평가되어 수행되지 않는다
	printf("x = %d, y = %d\n", x, y); // 즉 y값은 증가하지 않는다
	printf("z = %d\n", z);

	x = 5, y = 10;
	// AND && 앞이 거짓이면 무조건 거짓
	z = (x += 2) && (y += 1); // 단축평가???
	printf("x = %d, y = %d\n", x, y);
	printf("z = %d\n", z);


	int val = 60;
	int num;
	num = (val > 50 ? 10 : 20);
	printf("%d\n", num);


	/* 요금 계산하기 */
	int a, b, c, sum1;
	float d, sum2;
	printf("성인 인원수? (정수형) : ");
	scanf("%d", &a);
	printf("학생 인원수? (정수형) : ");
	scanf("%d", &b);
	printf("쿠폰소지여부? (예:1 / 아니오:0) : ");
	scanf("%d", &c);
	d = (float)(c == 1 ? 0.9 : 1.0);
	sum1 = (a * 8000) + (b * 6000);
	sum2 = sum1 * d;
	printf("전체요금 : %f\n", sum2);


	return 0;
}

/*
컴퓨터는 소수점 계산을 제대로 못함
0.5+0.25+0.125+...

연산자 시험에 많이 나옴
- 축약 대입 연산자
- 논리 연산자의 단축 평가
*/